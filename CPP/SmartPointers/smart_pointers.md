# Smart Pointer Concepts in C++

## Why Do We Need Smart Pointers?

When using traditional (raw) pointers, the programmer is responsible for explicitly deleting dynamically allocated memory. If `delete` is not called, memory leaks occur.

Example (memory leak):
```cpp
int main() {
    int *ptr2 = new int(10);
    // Memory allocated on the heap but never deleted → memory leak.
    return 0;
}
```

Smart pointers solve this problem by automatically managing the lifetime of dynamically allocated objects.

---

## RAII (Resource Acquisition Is Initialization)

**RAII** ensures that resources are properly released when objects go out of scope.

Example:
```cpp
#include <iostream>

class wrapper {
private:
    int *mem;

public:
    wrapper(int *p) : mem(p) {
        std::cout << "In wrapper class constructor" << std::endl;
    }

    ~wrapper() {
        std::cout << "In wrapper class destructor" << std::endl;
        delete mem; // memory resource is deleted automatically
    }
};

int main() {
    wrapper wrap2(new int(10));
    // Destructor automatically frees memory when wrap2 goes out of scope.
}
```

This principle is the foundation of smart pointers.

---

## Types of Smart Pointers

C++ provides four smart pointer types:
1. `auto_ptr` (deprecated since C++11)
2. `unique_ptr`
3. `shared_ptr`
4. `weak_ptr`

- `unique_ptr`: Exclusive ownership (only one owner of a resource).
- `shared_ptr`: Shared ownership (multiple smart pointers can manage the same resource).
- `weak_ptr`: Non-owning reference to an object managed by `shared_ptr`.

---

## Implementing `unique_ptr`

Example custom implementation:
```cpp
#include <iostream>

template <typename T>
class uniqueptr {
private:
    T *res;

public:
    explicit uniqueptr(T *a) : res(a) {
        std::cout << "In uniqueptr constructor." << std::endl;
    }

    // Delete copy constructor & copy assignment
    uniqueptr(const uniqueptr<T> &ptr1) = delete;
    uniqueptr& operator=(const uniqueptr<T> &ptr2) = delete;

    // Move constructor
    uniqueptr(uniqueptr<T> &&ptr) noexcept {
        res = ptr.res;
        ptr.res = nullptr;
    }

    // Move assignment
    uniqueptr& operator=(uniqueptr<T> &&ptr) noexcept {
        if (this != &ptr) {
            delete res;
            res = ptr.res;
            ptr.res = nullptr;
        }
        return *this;
    }

    // Overload operators
    T* operator->() { return res; }
    T& operator*() { return *res; }

    // Utility functions
    T* get() { return res; }

    void reset(T* newvalue = nullptr) {
        delete res;
        res = newvalue;
    }

    ~uniqueptr() {
        std::cout << "In destructor." << std::endl;
        delete res;
    }
};

int main() {
    uniqueptr<int> ptr1(new int(10));
    std::cout << *ptr1 << std::endl;

    uniqueptr<int> ptr4(new int(40));
    // Move ownership
    ptr4 = std::move(ptr1);

    if (ptr1.get() == nullptr)
        std::cout << "ptr1 is now empty." << std::endl;

    std::cout << *ptr4 << std::endl;
}
```

---

## Why `make_shared()` is Preferable Over Direct `shared_ptr` Construction?

1. **Exception Safety**
   - `std::make_shared<T>()` is safer because it constructs the object and the control block in one step.
   - `std::shared_ptr<T>(new T)` involves two allocations → if an exception occurs in between, it may leak.

2. **Efficiency**
   - `make_shared` performs **one heap allocation** (for both object and control block).
   - Direct `shared_ptr` construction performs **two allocations**.

3. **Correct Type Deduction**
   ```cpp
   auto p1 = std::make_shared<A>(); // automatically deduces type
   ```

4. **Better Cache Locality**
   - Since both the object and its control block are allocated together.

---

## Summary
- Raw pointers can cause memory leaks if not handled properly.
- RAII ensures resources are released automatically.
- Smart pointers (`unique_ptr`, `shared_ptr`, `weak_ptr`) provide automatic memory management.
- `unique_ptr` → exclusive ownership.
- `shared_ptr` → shared ownership.
- `make_shared()` is preferable for safety and efficiency.


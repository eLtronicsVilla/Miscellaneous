
#include <iostream>
template <typename T>
class sharedptr{
    private:
     T* res;
     int* counter;
     void increamentCounter(){
         if(counter){
             (*counter)++;
         }
     }
     
     void decreamentCounter(){
         if(counter){
             (*counter)--;
              if(counter == nullptr){
                  delete res;
                  delete counter;
                  res = nullptr;
                  counter = nullptr;
              }
         }
     }
    public:
    sharedptr(T* a = nullptr) : res(a), counter(new int(1)){ //here it will treat as default and parameterized constructor
        std::cout << "In constructor" << std::endl;
    }
    
    sharedptr(const sharedptr<T*> ptr){ // copy constructor
        res = ptr.res;
        counter = ptr.res;
        increamentCounter();
    }
    
    sharedptr(sharedptr<T*> ptr){ // move copy constructor
        res = ptr.res;
        counter = ptr.res;
        ptr.res = nullptr;
        ptr.counter = nullptr;
    }
    
    sharedptr<T>& operator=(const sharedptr<T>& ptr){
        if(this !=&ptr){
            decreamentCounter();
            res = ptr.res;
            counter = ptr.counter;
            increamentCounter();
        }
        return *this;
    }
    
    sharedptr<T>& operator=(sharedptr<T>& ptr){
        if(this !=&ptr){
            decreamentCounter();
            res = ptr.res;
            counter = ptr.counter;
            ptr.res = nullptr;
            ptr.counter = nullptr;
        }
        return *this;
    }
    
    void reset(T *ptr)
    {
       decreamentCounter();
       res = ptr;
       counter = new int(1);
    }
    
    int get_count(){
        if (counter){
            return *counter;
        }
        return -1;
    }
    
    T* operator->(){
        return res;
    }
    
    T& operatr*(){
        return (*res);
    }
    
    T* get()
    {
        return res;
    }
    
    ~sharedptr(){
        decreamentCounter();
    }
};
}
int main()
{
    //What all are we need to implement in shared pointer
    // sharedptr<int> ptr1; // Default constructor
    // sharedptr<int> ptr2(new int(10)); // parameterised constructor
    // sharedptr<int> ptr3(ptr1); // copy constructor
    // ptr3 = ptr2; // assignment operator
    // ptr1->func(); // arrow operator
    // *ptr1; // asstric operator
    // ptr1.reset(new int (20)) // reset the pointer value by 20
    // ptr1.reset() // It will reset the pointer to nullptr
    // sharedptr<int> ptr4(std::move(ptr1)); // move copy constructor
    // ptr2 = std::move(ptr1); //move assignment operator
    
    // ptr1.get_count(); //
    
    
    

    return 0;
}
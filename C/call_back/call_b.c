//callback is executable code( as function ) that can be pass as argument to a function . 

#include <stdio.h>

void pic_cb()
{
printf("take picture callback\n");
}

// callback function for take_pic

void take_pic(void (*ptr)())
{
(*ptr)();
}

int main()
{
void (*ptr)() =&pic_cb;
take_pic(ptr);
}

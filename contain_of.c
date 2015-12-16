#include <stdlib.h>
#include <stdio.h>

struct A{
    int a;
    int b;
    int c;
};
int main(){
    struct A a;
    printf("%p\n",&a);
    printf("%p\n",(struct A*)((char*)(&a.c) - (char*)&((struct A*)0)->c) );
}


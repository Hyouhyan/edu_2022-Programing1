#include<stdio.h>

int f(int x);

int main(void){
    for(int i = 0; i < 5; i++)
        printf("f(%d)=%d\n", i, f(i));
    return 0;
}

int f(int x){
    return (2*x + 1);
}
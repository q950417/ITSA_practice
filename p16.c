#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int n = 0 ; 
    scanf(" %d",&n);
    int num_10 = 0;
    int num_5 = 0;
    int num_1 = 0;
    num_10 = n / 10;
    n -= num_10 * 10;
    num_5 = n / 5;
    n -= num_5 * 5;
    num_1 = n;
    printf("NT10=%d\nNT5=%d\nNT1=%d\n",num_10,num_5,num_1);
}
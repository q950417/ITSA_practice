#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int n = 0 ;
    int num = 1000;
    scanf(" %d",&n);
    for(int i =  0 ; i < 4 ; i++){
        printf("%d\n",n/num);
        n -= (n/num)*num;
        num /= 10;
    }
}
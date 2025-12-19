#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n = 0 ;
    scanf(" %d",&n);
    if(n>0){
        printf("正數\n");
    }else if(n < 0){
        printf("負數\n");
    }
    else{
        printf("0\n");
    }
}
#include<stdio.h>
#include<stdlib.h>

int main(){

    int Y = 0 ;
    scanf(" %d",&Y);

    if(((Y%4==0)&&(Y%100!=0)) || (Y%400==0)){
        printf("Bissextile Year\n");
    }else{
        printf("Common Year\n");
    }
}
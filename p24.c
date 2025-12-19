#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int n = 0 ;
    scanf(" %d",&n);
    double price = 0.0;
    price = n * 100;
    if(n<10){
        printf("%.0lf\n",price);
    }else if((n>=10)&&(n < 30)){
        printf("%.0lf\n",price*0.9);
    }else if((n>=30)&&(n<100)){
        printf("%.0lf\n",price*0.8);
    }else{
        printf("%.0lf\n", price * 0.7);
    }
}
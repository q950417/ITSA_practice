#include<stdio.h>

int main(){


    int n = 0 ;
    scanf(" %d",&n);
    int num_100,num_10,num_1;
    num_100 = n/100;
    n -= num_100*100;
    num_10 = n/10;
    n -= num_10*10;
    num_1 = n;
    printf("百元 %d\n十元 %d\n壹元 %d",num_100,num_10,num_1);
}
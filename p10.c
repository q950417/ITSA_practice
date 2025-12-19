#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){


    int n = 0;
    scanf(" %d",&n);
    int digits[5] = {0};
    for(int i = 4 ; i >= 0 ; i--){
        digits[i] = n % 10;
        n /= 10;
    }
    for(int i = 0; i < 5 ;i++){
        int n = digits[i];
        for(int j = 0 ; j < n ; j++){
            printf("*");
        }
        printf("\n");
    }

}
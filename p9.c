#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n = 0;
    scanf(" %d",&n);
    int digits[4] = {0};
    for(int i = 3 ; i >= 0 ; i--){
        digits[i] = n % 10;
        n /= 10;
        if(i!=0){
            printf("%d,", digits[i]);
        }else{
            printf("%d\n", digits[i]);
        }
    }
}
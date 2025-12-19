#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n[3] = {0};
    for(int i = 0 ; i < 3 ; i++){
        scanf(" %d",&n[i]);
    }
    int max = 0;
    for(int i = 0 ; i < 3 ; i++){
        if(n[i] > max){
            max = n[i];
        }
    }
    printf("%d\n",max);
}
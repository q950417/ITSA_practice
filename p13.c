#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n = 0 ;
    scanf(" %d",&n);
    for(int i = 0 ; i < n ; i++){
        int m = 0;
        scanf(" %d",&m);
        printf("%d %d %d\n",m,m*m,m*m*m);
    }
}
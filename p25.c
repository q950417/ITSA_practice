#include<stdio.h>
#include<stdlib.h>

int main(){


    int n = 0 ;
    scanf(" %d",&n);
    for(int i = 0 ;  i < n ; i++){
        int x = 0 ;
        scanf(" %d",&x);
        if((50<=x)&&(70>=x)){
            printf("%d\n",x);
        }else{
            printf("100\n");
        }
    }
}
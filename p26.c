#include<stdio.h>
#include<stdlib.h>

int main(){

    int n = 0 ;
    int max = -101;
    int x = 0;
    scanf(" %d",&n);
    for(int i = 0 ; i < n ; i++){
        
        scanf(" %d",&x);
        if(x>max){
            max = x;
        }
        
    }
    printf("%d\n",max);
}
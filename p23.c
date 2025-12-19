#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n = 0;
    scanf(" %d",&n);

    for(int i = 2 ; i < n ; i++){
        
        if(n%i == 0){
            printf("NO\n");
            break;
        }else if((i+1)==n){
            printf("YES\n");
        }
    }
    if (n == 1)
    {
        printf("NO\n");
    }
}
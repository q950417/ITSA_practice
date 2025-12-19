#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){

    int n = 0;
    scanf(" %d",&n);
    for(int i = 0 ; i < n ; i++){
        int x ,y = 0;
        scanf(" %d %d",&x,&y);
        printf("%d\n",(x+y)*(x+y));
    }

}
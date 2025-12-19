#include<stdio.h>
#include<stdlib.h>

int main(){
    int M = 0 ;
    scanf(" %d",&M);
    if(M<3 || M ==12){
        printf("Winter\n");
    }else if(M<6){
        printf("Spring\n");
    }else if(M<9){
        printf("Summer\n");
    }else if(M<12){
        printf("Autumn\n");
    }
}
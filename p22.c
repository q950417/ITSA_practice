#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char c;
    scanf(" %c",&c);
    int n = (int)c;
    if(n == 65 || n == 69 || n == 73 || n == 79 || n == 85 || n == 97 || n == 101 || n == 105 || n == 111 || n == 117){
        printf("母音\n");
    }else{
        printf("子音\n");
    }

}
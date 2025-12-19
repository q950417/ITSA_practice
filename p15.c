#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    double c = 0;
    scanf(" %lf",&c);
    double f = 0.0;
    f = c * 9.0 / 5.0 + 32.0;
    printf("%.1f\n",f);
}
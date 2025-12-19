#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int w = 0;
    int h = 0;
    float bmi = 0.0;
    scanf(" %d %d",&w,&h);
    bmi = (float)(w) / ((float)(h)*(float)(h)) * 10000.0;
    printf("%.2f\n",bmi);
}
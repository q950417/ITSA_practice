#include<stdio.h>

int main(){

    int n = 0 ;
    scanf(" %d",&n);
    for(int i =0 ; i < n ; i++){
        double bmi = 0.0;
        scanf(" %lf",&bmi);
        if(bmi<18.5){
            printf("體重過輕\n");
        }else if(bmi<24){
            printf("正常\n");
        }else if(bmi<28){
            printf("體重過重\n");
        }else{
            printf("肥胖\n");
        }
    }
}
#include<stdio.h>
#include<stdlib.h>

int main(){

    int n = 0 ;
    scanf(" %d",&n);
    for(int i = 0 ; i < n ; i++){
        int x = 0;
        scanf(" %d",&x);
        if(100>=x && 90<=x){
            printf("優等\n");
        }else if(x >=80){
            printf("甲等\n");
        }else if(x >= 70){
            printf("乙等\n");
        }else if(x>=60){
            printf("丙等\n");
        }else{
            printf("不及格\n");
        }
    }

}
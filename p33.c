#include<stdio.h>
#include<math.h>
int main(){

    int x=0,y=0;
    scanf(" %d %d",&x,&y);
    double dis = 0.0;
    dis = sqrt(x*x+y*y);
    if(dis<=100){
        printf("inside\n");
    }else{
        printf("outside\n");
    }
}
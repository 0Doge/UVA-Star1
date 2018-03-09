#include<stdio.h>

int main(){
    float m=0,h=0,temp=0;
    char t;
    while(scanf("%f %c %f",&h,&t,&m)){
        if(h==0&&m==0) break;
        h=h*30+m/2;
        m=m*6;
        temp=h-m;
        if(temp<0) temp=temp*-1;
        if(temp>180) temp=360-temp;
        printf("%.3f\n",temp);
    }
    return 0;
}

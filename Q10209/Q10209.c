#include<stdio.h>
#include<math.h>
int main(){
    double a=0,mid=0,tra=0,cir=0,x=0,y=0,z=0,pi=2.0*acos(0.0);//¤¤¶¡ 4¨¤¸¨ ³Ñ¾l
    while(scanf("%lf",&a)!=EOF){
        mid=a*a*pi/2-a*a;
        cir=a*a*pi;
        tra=a/4*a*sqrt(3);
        y=mid-cir/12-(cir/6-tra)*2;
        x=mid-y*2;
        z=8*((a*a-tra)/2-cir/12);
        printf("%.3lf %.3lf %.3lf\n",x,y*4,z);
    }
    return 0;
}

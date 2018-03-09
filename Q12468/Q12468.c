//uva Q12468 2018/1/24

#include <stdio.h>

int main(){

    int a=0,b=0,temp=0;
    while(scanf("%d %d",&a,&b),a!=-1||b!=-1){
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        printf("%d\n",b-a<100+a-b?b-a:100+a-b);
    }
    return 0;
}

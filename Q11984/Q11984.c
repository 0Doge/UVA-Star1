// Q11984 2018/1/24

#include <stdio.h>

int main(){
    int t=0;
    scanf("%d",&t);
    for(int k=1;k<=t;k++){
        int c=0,d=0;
        scanf("%d %d",&c,&d);
        printf("Case %d: %.2f\n",k,c+(float)d*5/9);
    }
    return 0;
}

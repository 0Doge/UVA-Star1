//uva Q10812  2018/1/20

#include <stdio.h>

int main(){
    int m=0;
    scanf("%d",&m);
    for(int k=0;k<m;k++){
        int s=0,d=0;
        scanf("%d %d",&s,&d);

        if(s>d&&(s-d)%2==0)
            printf("%d %d\n",(s-d)/2+d,(s-d)/2);
        else
            printf("impossible\n");
    }
    return 0;
}

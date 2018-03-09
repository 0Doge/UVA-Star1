//uva Q12650 2018/1/24

#include <stdio.h>


int main(){

    int n=0,r=0;

    while(scanf("%d %d",&n,&r)!=EOF){

        int in=0,life[10001]={0};
        for(int i=0;i<r;i++){
            scanf("%d",&in);
            life[in]=1;
        }


        int check=0;
        for(int i=1;i<=n;i++){
            if(life[i]==0){
                printf("%d ",i);
                check=1;
            }
            if(check==0&&i==n)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}

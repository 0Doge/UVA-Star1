//uva Q12405 2018/1/24

#include <stdio.h>


int main(){
    int t=0;
    scanf("%d",&t);

    for(int k=1;k<=t;k++){
        int farmlong=0,scare=0;
        char farm;
        scanf("%d",&farmlong);

        int stay=-2; //上個稻草人在位置
        for(int i=0;i<=farmlong;i++){
            scanf("%c",&farm);
            if(farm=='.'&&i-stay>1){
                stay=i+1;
                scare++;
            }
        }

        printf("Case %d: %d\n",k,scare);
    }

    return 0;

}

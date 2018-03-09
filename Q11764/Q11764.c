// Q11764 2018/1/24

#include <stdio.h>

int JumpCheck(int in[],int wall){
    int high=0,low=0;
    for(int i=1;i<wall;i++){
        if(in[i]>in[i-1])  //比上一塊高
            high+=1;
        else if(in[i]<in[i-1]) //比上一塊低
            low+=1;
    }

    return high*100+low; //千位百位為 high jump  十位個位為low jump

}

int main(){
    int t=0;
    scanf("%d",&t);
    for(int k=1;k<=t;k++){
        int wall=0,high[50]={0};
        scanf("%d",&wall);

        for(int i=0;i<wall;i++)
            scanf("%d",&high[i]);

        printf("Case %d: %d %d\n",k,JumpCheck(high,wall)/100,JumpCheck(high,wall)%100);



    }
    return 0;
}

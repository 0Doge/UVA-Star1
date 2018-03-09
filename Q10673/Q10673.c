//解法僅參考

#include<stdio.h>


int main(){
    int m=0,x=0,k=0,floor=0,ceil=0,p=0,q=0;
    scanf("%d",&m);

    for(int i=0;i<m;i++){
        scanf("%d %d",&x,&k);

        floor=x/k;
        ceil=x/k;
        if(x%k!=0)
            ceil+=1;


        if(floor==0){
            p=0;
            q=x;
        }
        else{
            q=x%floor;
            p=x/floor-q;
        }
        printf("%d %d\n",p,q);

    }

    return 0;
}

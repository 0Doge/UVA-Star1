//uva Q11369 2018/1/21

#include <stdio.h>

int cheap(int in[],int n){
    int temp=0,sum=0;


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(in[j]<in[j+1]){
                temp=in[j];
                in[j]=in[j+1];
                in[j+1]=temp;
            }
        }
    }
    for(int j=2;j<n;j+=3)
        sum+=in[j];

    return sum;
}

int main(){
    int t=0,n=0;
    scanf("%d",&t);
    for(int k=0;k<t;k++){
        int thing[20000]={0};
        scanf("%d",&n);
        for(int j=0;j<n;j++)
            scanf("%d",&thing[j]);

    printf("%d\n",cheap(thing,n));
    }
    return 0;
}

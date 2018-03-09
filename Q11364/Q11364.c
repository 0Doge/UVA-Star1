//uva Q11364 2018/1/21

#include <stdio.h>

int max_min(int in[],int n){
    int max=in[0],min=in[0];

    for(int i=0;i<n;i++){
        if(in[i]>max)
            max=in[i];
        if(in[i]<min)
            min=in[i];
    }
    return (max-min);
}

int main(){
    int t=0,n=0;
    scanf("%d",&t);
    for(int k=0;k<t;k++){
        int store[20]={0};
        scanf("%d",&n);
        for(int j=0;j<n;j++)
            scanf("%d",&store[j]);

    printf("%d\n",max_min(store,n)*2);

    }
    return 0;
}

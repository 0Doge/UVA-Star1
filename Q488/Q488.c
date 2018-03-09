#include<stdio.h>
void priaf(int a,int f){
    for(int k=0;k<f;k++){
        for(int i=1;i<a;i++){
            for(int j=0;j<i;j++){
                printf("%d",i);
            }
            printf("\n");
        }
        for(int i=a;i>0;i--){
            for(int j=0;j<i;j++){
                printf("%d",i);
            }
            printf("\n");
        }
        if(k!=f-1)
            printf("\n");
    }
}


int main (){
    int n=0,a=0,f=0;
    scanf("%d",&n);
    for(int k=0;k<n;k++){
        scanf("%d %d",&a,&f);
        priaf(a,f);
        if(k!=n-1)
            printf("\n");
    }
return 0;
}

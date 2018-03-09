#include<stdio.h>

int main(){

    int n=0;

    while(scanf("%d",&n)!=EOF){
        int arrn[3000]={0},check[3000]={0},temp=0;
        for(int k=0;k<n;k++){
            scanf("%d",&arrn[k]);
            if(k>0){
                temp=arrn[k]-arrn[k-1];
                if(temp<0) temp*=-1;
                check[temp]=1;
            }
        }
        for(int k=0;k<n;k++){
            if(k>0&&check[k]==0){
                printf("Not jolly\n");
                break;
            }
            else if(k==n-1)
                printf("Jolly\n");
        }
    }
    return 0;
}

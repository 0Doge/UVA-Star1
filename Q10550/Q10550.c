#include<stdio.h>

int main(){
    int n[4]={0},ans=0;
    while(scanf("%d%d%d%d",&n[0],&n[1],&n[2],&n[3])!=EOF&&(n[0]>0||n[1]>0||n[2]>0||n[3]>0)){
        ans=1080;
        if(n[1]>n[0])
            ans+=360-(n[1]-n[0])*9;
        else
            ans+=(n[0]-n[1])*9;
        if(n[2]>=n[1])
            ans+=(n[2]-n[1])*9;
        else
            ans+=360-(n[1]-n[2])*9;
        if(n[3]>n[2])
            ans+=360-(n[3]-n[2])*9;
        else
            ans+=(n[2]-n[3])*9;
            printf("%d\n",ans);

    }
    return 0;
}

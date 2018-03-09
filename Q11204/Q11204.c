//uva Q11204 2018/1/21

#include <stdio.h>

int main(){
    int s=0,n=0,m=0,ans=0,temp=0;

    scanf("%d ",&s);
    for(int k=0;k<s;k++){
        int wish[35]={0};

        scanf("%d %d ",&n,&m);
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                scanf("%d",&temp);
                if(temp==1)
                    wish[i]++;
            }

        }

        ans=1;
        for(int j=0;j<n;j++){
            if(wish[j]!=0)
                ans*=wish[j];
        }
        printf("%d\n",ans);

    }

    return 0;
}

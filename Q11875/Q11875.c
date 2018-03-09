// Q11875 2018/1/24

#include <stdio.h>

int main(){
    int t=0;
    scanf("%d",&t);
    for(int k=1;k<=t;k++){
        int peo=0,old[10]={0};

        scanf("%d",&peo);
        for(int j=0;j<peo;j++){
            scanf("%d",&old[j]);
        }
        printf("Case %d: %d\n",k,old[peo/2]);
    }

    return 0;
}

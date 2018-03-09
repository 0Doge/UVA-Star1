#include<stdio.h>

int main(){
    int n=0,start=0,end=0;
    scanf("%d",&n);
    for(int k=0;k<n;k++){
        scanf("%d %d",&start,&end);

        start=start%2?start:start+1;
        end=end%2?end:end-1;
        printf("Case %d: %d\n",k+1,(end+start)/2*((end-start)/2+1));//上底+下底/2 *項數

    }
    return 0;
}

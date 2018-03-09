#include<stdio.h>
int main(){
    int set[10000],howmamynumber=0,temp=0;
while(scanf("%d",&set[howmamynumber])!=EOF){
    for(int j=howmamynumber;j>0;j--){
                if(howmamynumber>0&&set[j]<set[j-1]){
                    temp=set[j];
                    set[j]=set[j-1];
                    set[j-1]=temp;
                }
        }
        howmamynumber+=1;
        if(howmamynumber%2==0)
            printf("%d\n",(set[howmamynumber/2-1]+set[howmamynumber/2])/2);
        else
            printf("%d\n",set[howmamynumber/2]);
    }
    return 0;
}

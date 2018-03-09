//uva Q13178 2018/1/23

#include <stdio.h>

long long NumberSum(int in){
    long long sum =0;
    for(int i=1;i<=in;i++){
        int icpy=i;
        while(icpy>0){
            sum+=icpy%10;
            icpy/=10;
        }
    }
    return sum;
}

int main(){

    int t=0;
    scanf("%d",&t);

    for(int k=0;k<t;k++){
        int n=0;
        scanf("%d",&n);

        if(NumberSum(n)%3==0)
            printf("YES\n");
        else
            printf("NO\n");
       printf("[%d]\n",NumberSum(n));
    }

    return 0;
}

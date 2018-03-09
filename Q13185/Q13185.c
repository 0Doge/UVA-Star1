//uva Q13185 2018/1/23

#include <stdio.h>

int FactorSum(int in){
    int sum =0;
    for(int i=1;i<in;i++){
        if(in%i==0)
            sum+=i;
    }
    return sum;
}

int main(){

    int t=0;
    scanf("%d",&t);

    for(int k=0;k<t;k++){
        int n=0;
        scanf("%d",&n);

        if(FactorSum(n)==n)
            printf("perfect\n");
        else if(FactorSum(n)>n)
            printf("abundant\n");
        else
            printf("deficient\n");
    }

    return 0;
}

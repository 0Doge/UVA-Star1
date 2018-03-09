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
    FILE *fout;
    fout=fopen("ans.txt","w+t");

    int t=0;
    scanf("%d",&t);

    for(int k=0;k<1000;k++){
        int n=0;
//        scanf("%d",&n);


        printf(" %d| %d\n",k, NumberSum(k));

    }

    return 0;
}

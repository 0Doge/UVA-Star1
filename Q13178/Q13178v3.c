// Q13178 2018/1/24

#include <stdio.h>

long long digitsum(int in){
    long long sum=0;

    for(int i=1;i<=9;i++){
        int value=in;
        int digit=1; //计run近瞷Ω计 1Ω 10Ω (ex 1 10~19)
        int lastdigit=0; //计

        while(value>0){
        if(value%10==i)
            sum+=(value/10*digit+lastdigit+1)*i;
        else if(value%10<i)
            sum+=((value/10)*digit)*i;

        else if(value%10>i)
            sum+=((value/10+1)*digit)*i;

        lastdigit+=value%10*digit;
        digit*=10;
        value/=10;
        }
    }
    return sum;
}

int bad(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        int cpy=i;
        while(cpy){
            sum+=cpy%10;
            cpy/=10;
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
        if(digitsum(n)%3==0)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}

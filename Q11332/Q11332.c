//uva Q11332 2018/1/21

#include <stdio.h>

int f(long long in){
     int sum=0;
    if(in<10)
        return in;
    else{
        while(in){
            sum+=in%10;
            in/=10;
        }
        return f(sum);
    }

}

int main(){
    long long in=0;
    while(scanf("%lld",&in),in!=0){
        printf("%d\n",f(in));



    }

    return 0;
}

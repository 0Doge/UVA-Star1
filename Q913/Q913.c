#include<stdio.h>

int main(){
    long long n=0;
    while(scanf("%lld",&n)!=EOF){
        printf("%lld\n",(((n+1)/2*(n+1)/2)*2-3)*3);
    }
    return 0;
}

//uva Q12149 2018/1/24

#include <stdio.h>

int square(int n);

int main(){
    int n=0;
    while(scanf("%d",&n),n!=0){
        printf("%d\n",square(n));
    }
    return 0;
}

int square(int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=(n-i)*(n-i);
    }
    return sum;

}

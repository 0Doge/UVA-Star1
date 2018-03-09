//uva Q11185 2018/1/20

#include <stdio.h>

int main(){
    long n;
    int carry3[50];
    while(scanf("%ld",&n),n>=0){


    if(n==0)
        printf("0");


    int m=0;
    while(n>0){
        carry3[m]=n%3;
        n/=3;
        m++;
    }


    for(int i=m-1;i>=0;i--)
        printf("%d",carry3[i]);
    printf("\n");

    }


    return 0;
}

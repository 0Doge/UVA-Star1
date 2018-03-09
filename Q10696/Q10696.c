#include<stdio.h>

int t91(int n){
    if (n>100)
        return n-10;
    else
        return t91(t91(n+11));


}

int main(){
    int in;
    while (scanf("%d",&in),in!=0){


        printf("f91(%d) = %d\n",in,t91(in));

    }

    return 0;
}

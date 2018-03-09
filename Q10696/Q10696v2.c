#include<stdio.h>

int main(){
    int in;
    while (scanf("%d",&in),in!=0){
        printf("f91(%d) = %d\n",in,in>101?in-10:91);
    }
    return 0;
}

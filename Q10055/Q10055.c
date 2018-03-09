#include<stdio.h>

int main(){
    unsigned int small=0,big=0,temp=0;
    while(scanf("%d %d",&big,&small)!=EOF){
        if(small>big){
            temp=small;
            small=big;
            big=temp;
        }
        printf("%d\n",big-small);

    }
    return 0;
}

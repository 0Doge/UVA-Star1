//uva Q11541 2018/1/22

#include <stdio.h>

int main(){
    int t=0,n=0;
    char in;
    scanf("%d ",&t);

    for(int k=1;k<=t;k++){
        printf("Case %d: ",k);

        while(in=getchar(),in!='\n'&&in!=EOF){
            scanf("%d",&n);
            for(int i=0;i<n;i++){
                printf("%c",in);
            }
        }

        printf("\n");


    }
    return 0;
}

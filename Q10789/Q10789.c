#include<stdio.h>
#include<string.h>

int Prime(int n){
    if(n<2)
        return 0;
    for(int i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;

}

int main(){
    int temp=0,t=0;
    char in[2002],getn;
    scanf("%d",&t);
    gets(&getn);

    for(int k=0;k<t;k++){
        int ascii[256]={0};
        fgets(in,2002,stdin);
        for(int i=0;i<strlen(in)-1;i++){
            temp=in[i];
            ascii[temp]++;
        }


    printf("Case %d: ",k+1);
    int empty=0;
    for(int i=0;i<256;i++){
        if(Prime(ascii[i])){
            printf("%c",i);
            empty=1;
        }
    }
    if(empty==0)
        printf("empty");
    printf("\n");

    }

    return 0;
}

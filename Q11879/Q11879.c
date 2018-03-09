// Q11879 2018/1/24

#include <stdio.h>
#include <string.h>

int mod17(char in[]){
    int mod=0;
    for(int i=0;i<strlen(in);i++){
        mod=(mod*10+(in[i]-48))%17;
    }
    return mod==0?1:0;
}


int main(){
    char in[105]={0};
    while(scanf("%s",in),in[0]!='0'){
        printf("%d\n",mod17(in));
    }
    return 0;
}

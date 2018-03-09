//uva Q10929 2018/1/20

#include <stdio.h>
#include <string.h>

int eleven(char in[]){
    int odd=0,even=0;
    for(int i=0;i<strlen(in);i++){
        if(i%2==1)
            odd+=in[i]-48;
        else
            even+=in[i]-48;
    }
    return (odd-even)%11==0?1:0;
}


int main(){
    char in[1005]={0};
    while(scanf("%s",in)&in[0]!='0'){

        if(eleven(in)==1)
            printf("%s is a multiple of 11.\n",in);
        else
            printf("%s is not a multiple of 11.\n",in);
    }

    return 0;
}

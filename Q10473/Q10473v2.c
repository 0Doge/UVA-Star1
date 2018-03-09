#include<stdio.h>
#include<string.h>
int stod(char in[]){
    int ans=0;
    for(int i=0;i<strlen(in);i++)
        ans=ans*10+in[i]-48;
    return ans;
}

int stoh(char in[]){
    int ans=0;
    for(int i=2;i<strlen(in);i++){
        if(in[i]<=57)
            ans=ans*16+in[i]-48;
        else
            ans=ans*16+in[i]-55;
    }
    return ans;
}

int main(){
    int n=0;
    char num[10];
    while(scanf("%s",&num)!=EOF&&num[0]!='-'){
        if(num[0]!='0')
            printf("0x%X\n",stod(num));
        else
            printf("%d\n",stoh(num));
    }
    return 0;
}

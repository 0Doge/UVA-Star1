#include<stdio.h>
#include<string.h>
int del(char in1[],char in2[]){
    int w=-1;
    for(int i=0;i<strlen(in1);i++){
        for(int j=0;j<strlen(in2);j++){
            if(in1[i]==in2[j]&&j>w){
                w=j;
                break;
            }
            else if(j==strlen(in2)-1)
                return 0;
        }
    }
    return 1;

}

int main(){

    char in1[1000],in2[1000];
    while(scanf("%s %s",&in1,&in2)!=EOF){
        if(del(in1,in2))
            printf("Yes\n");
        else
             printf("No\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>

int main(){
    char in[1000];
    while(gets(in)&&in[strlen(in)!=EOF]){
        int word=0,check=0;
        for(int i=0;i<strlen(in);i++){
                if((in[i]>=65&&in[i]<=90)||(in[i]>=97&&in[i]<=122)) check++;
                else {
                    if(check>=1) word++;
                    check=0;
                }
                if(i==strlen(in)-1&&check>=1) word++;
        }
        printf("%d\n",word);
    }
    return 0;
}

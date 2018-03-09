#include<stdio.h>
#include<string.h>


int main (){
    char in[10000];
    int odd=0;
    while(gets(in)&&in[strlen(in)]!=EOF){

        int len=strlen(in);


        for(int i=0;i<len;i++){
            if(in[i]!='"')
                printf("%c",in[i]);
            else if(odd==0){
                printf("``");
                odd=1;
            }
            else if(odd==1){
                printf("''");
                odd=0;
            }
        }
    printf("\n");
    }
    return 0;
}

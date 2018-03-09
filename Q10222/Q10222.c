#include<stdio.h>
#include<string.h>
void tol(char in);

int main(){
    char in[1000];
    int v=0,t=0;
    while(gets(in)&&in[strlen(in)]!=EOF){
           for(int i=0;i<strlen(in);i++){
                tol(in[i]);
           }
            printf("\n");
    }
    return 0;
}

void tol(char in){
    char v[]="`1234567890-=  qwertyuiop[]\\  asdfghjkl;'  zxcvbnm,./";
    for(int i=0;i<strlen(v);i++){
        if(in==' '){
            printf(" ");
            break;
        }
        else if(in==v[i]){
            printf("%c",v[i-2]);
            break;
        }
    }
}

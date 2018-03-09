//uva Q11192 2018/1/20

#include <stdio.h>
#include <string.h>

void nstr(char in[],int g){
    char temp;
    for(int i=0;i<g/2;i++){
        temp=in[i];
        in[i]=in[g-i-1];
        in[g-i-1]=temp;
    }
}


int main(){
    int g=0,cstr=0; //cstr 每組有多少字
    char str[101];
    while(scanf("%d",&g),g!=0){
        scanf("%s",str);
        cstr=strlen(str)/g;

        for(int i=0;i<strlen(str);i+=cstr)
            nstr(str+i,cstr);
        for(int i=0;i<strlen(str);i++)
            printf("%c",str[i]);
        printf("\n");

    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
    char in[1002];
    int spell=0;
    while(gets(in)&&in[strlen(in)]!=EOF){
        int ascii[256]={0},max=0,tmax=0;

        if(spell==0)
            spell=1;
        else
            printf("\n");
        for(int i=0;i<strlen(in);i++){
            ascii[in[i]]++;
        }

        for(int i=0;i<256;i++){
           if(ascii[i]>max)
                max=ascii[i];
        }
        while(max>tmax++){
        for(int i=255;i>=0;i--){
           if(ascii[i]==tmax)
               printf("%d %d\n" ,i,ascii[i]);
            }
        }

    }
    return 0;
}

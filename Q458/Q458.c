#include<stdio.h>
#include<string.h>

int main (){
    char inputstr[1000];

    while(gets(inputstr)&&inputstr[strlen(inputstr)]!=EOF){
        for(int i=0;i<strlen(inputstr);i++)
            printf("%c",inputstr[i]-7);
        printf("\n");
    }
return 0;
}

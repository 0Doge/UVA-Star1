//uva Q11398 2018/1/22

#include <stdio.h>
#include <string.h>

int tod(char in[]){
    int flag=0,sum=0;
    char *ptr=strtok(in," ");


    while(ptr){
        if(*ptr=='#')
            break;

        if(strlen(ptr)==1)
            flag=1;
        else if(strlen(ptr)==2)
            flag=0;
        else{
            for(int i=0;i<strlen(ptr)-2;i++){
                sum=sum<<1;
                sum=sum|flag;
            }
        }
        ptr = strtok(NULL," ");
    }

    return sum;
}


int main(){
        char in[500]={0};

    while(fgets(in,500,stdin)&&in[0]!='~'){
        char cat[500]={0};

        strncat(cat,in, strlen(in)-1);

        while(in[strlen(in)-3]!=' '){
            cat[strlen(cat)-1]=' ';   //這裡理解成00 000# 的井字號表示未輸入完 沒有同時代表0
            fgets(in,500,stdin);
            strncat(cat,in, strlen(in)-1);
        }

        printf("%d\n",tod(cat));

    }

    return 0;
}

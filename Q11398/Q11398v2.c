//uva Q11398 2018/1/22
// 數字分行時 #同時也代表0

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

        in[strlen(in)-1]=' ';
        strncat(cat,in, strlen(in));

        while(in[strlen(in)-3]!=' '){
            fgets(in,500,stdin);
            in[strlen(in)-1]=' ';
            strncat(cat,in, strlen(in));
        }
        //printf("%s\n",cat);
        printf("%d\n",tod(cat));

    }

    return 0;
}

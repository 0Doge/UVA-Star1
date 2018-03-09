//uva Q11687 2018/1/22

#include <stdio.h>
#include <string.h>

int dig(int in){  //¦^¶Çxi=1 ªºi
    int i=0;
    if(in==1)
        return 1;


    while(in){
        i++;
        in/=10;
    }
    return 1+dig(i);
}

int main(){

    char in[100]={0};
    while(fgets(in,100,stdin),in[0]!='E'){
        int l=strlen(in)-1;

        if(l==1&&in[0]=='1')
            printf("1\n");
        else
            printf("%d\n",dig(l)+1);//xi=xi-1
    }
    return 0;
}

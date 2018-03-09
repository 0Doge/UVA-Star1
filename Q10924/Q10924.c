//uva Q10924 2018/1/20

#include <stdio.h>
#include <string.h>

int strsum(char in[]){
    int sum=0;
    for(int i=0;i<strlen(in)-1;i++){
        if(in[i]<=90)
            sum+=in[i]-38;
        else
            sum+=in[i]-96;
    }
    return sum;
}

int prime(int in){
    for(int i=2;i<in;i++){
        if(in%i==0)
            return 0;
    }
    return 1;
}

int main(){
    char in[22]={0};
    while(fgets(in,22,stdin)){
        if(prime(strsum(in))==1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }

    return 0;
}

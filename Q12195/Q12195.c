//uva Q12195 2018/1/24

#include <stdio.h>
#include <string.h>

int TempoCorrect(char in[]);

int main(){
    char tempo[100]={0};
    while(scanf("%s",tempo),tempo[0]!='*'){
        printf("%d\n",TempoCorrect(tempo));
    }
    return 0;
}

int TempoCorrect(char in[]){
    int correct=0,sum=0;

    for(int i=0;i<strlen(in);i++){
        switch(in[i]){
            case 'W':
                sum+=64;
                break;
            case 'H':
                sum+=32;
                break;
            case 'Q':
                sum+=16;
                break;
            case 'E':
                sum+=8;
                break;
            case 'S':
                sum+=4;
                break;
            case 'T':
                sum+=2;
                break;
            case 'X':
                sum+=1;
                break;
            default:
                if(sum==64)
                    correct++;
                sum=0;
        }
    }
    return correct;
}

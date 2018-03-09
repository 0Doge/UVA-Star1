//uva Q12602 2018/1/24

#include <stdio.h>
int eti(char in[]){
    return ((in[0]-65)*26*26+(in[1]-65)*26+(in[2]-65));
}

int ll(int in){
    return in>0?in:-in;
}


int main(){

    int n=0;
    scanf("%d ",&n);
    for(int k=0;k<n;k++){
        int d=0;
        char l[4]={0};
        fgets(l,4,stdin); //讀入LLL\n
        scanf("%d ",&d); //讀入D\n (線上編譯結束會有EOF 若無最後一筆會一直等待輸入)
        d*=-1;

        if(ll(eti(l)-d)<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
}

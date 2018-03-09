//uva Q12602 2018/1/24

#include <stdio.h>
int eti(char in[]){
    return ((in[0]-65)*26*26+(in[1]-65)*26+(in[2]-65));
}

int cti(char in[]){
    return ((in[4]-48)*1000+(in[5]-48)*100+(in[6]-48)*10+(in[7]-48));
}

int ll(int in){
    return in>0?in:-in;
}


int main(){

    int n=0;
    scanf("%d ",&n);
    for(int k=0;k<n;k++){
        char l[9]={0};
        scanf("%s",l);

        if(ll(eti(l)-cti(l))<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
}

//uva Q11743 2018/1/23

#include <stdio.h>

int Luhn(char in[][4]){
    int sum=0;

    for(int i=0;i<4;i++){
        sum+=in[i][1]+in[i][3]-96;
        sum+=(in[i][0]-48)*2>9?1+(in[i][0]-48)*2%10:(in[i][0]-48)*2;
        sum+=(in[i][2]-48)*2>9?1+(in[i][2]-48)*2%10:(in[i][2]-48)*2;
    }
    return sum%10==0?1:0;
}

int main(){
    int n=0;
    scanf("%d ",&n);

    for(int k=0;k<n;k++){
        char credit[4][4]={0};
        scanf("%s %s %s %s",credit[0],credit[1],credit[2],credit[3]);

        if(Luhn(credit)==1)
            printf("Valid\n");
        else
            printf("Invalid\n");
    }
    return 0;
}

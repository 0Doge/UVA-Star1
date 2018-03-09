//uva Q11577 2018/1/22

#include <stdio.h>
#include <string.h>

int most(int in[]){
    int max=0;
    for(int i=0;i<26;i++){
        if(in[i]>max)
            max=in[i];
    }
    return max;

}

int main(){
    int t=0;
    char in[205]={0};
    scanf("%d ",&t);

    for(int k=0;k<t;k++){
        int letter[26]={0};
        fgets(in,205,stdin);

        for(int i=0;i<strlen(in);i++){
            if(in[i]>=65&&in[i]<=90)
                letter[in[i]-65]++;
            else if(in[i]>=97&&in[i]<=122)
                letter[in[i]-97]++;
        }

        int fre=most(letter);
        for(int i=0;i<26;i++){
            if(letter[i]==fre)
                printf("%c",i+97);
        }
        printf("\n");

    }
    return 0;
}

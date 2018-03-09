//uva Q12289 2018/1/24

#include <stdio.h>
#include <string.h>

int main(){
    int t=0;
    scanf("%d",&t);

    for(int k=0;k<t;k++){
        char words[7]={0};
        scanf("%s",words);
        if(strlen(words)==5)
            printf("3\n");
        else if(words[0]=='o'&&words[1]=='n'||words[0]=='o'&&words[2]=='e'||words[1]=='n'&&words[2]=='e')
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}

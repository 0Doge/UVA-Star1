//uva Q10878  2018/1/20

#include <stdio.h>
#include<math.h>

int main(){
    char in[13]={0};
    int c=0;


    while(fgets(in,13,stdin)){
        if(in[0]=='_')
            continue;
        c=0;
        for(int i=1;i<6;i++){
            if(in[i]=='o'){
                c+=pow(2,(8-i));
            }
        }
        for(int i=7;i<10;i++){
            if(in[i]=='o')
                c+=pow(2,(9-i));
        }

        printf("%c",c);
    }
    return 0;
}

//uva Q11661 2018/1/22

#include <stdio.h>

int main(){
    int n=0;
    char in;

    while(scanf("%d ",&n),n!=0){
        int hl=20000,b=0;
        char bit='.';

        for(int i=0;i<n;i++){
            scanf("%c ",&in);
            if(in=='Z')
                hl=0;
            else if(in=='R'||in=='D'){
                if((in=='R'&&bit=='D')||(in=='D'&&bit=='R')){
                    hl=i-b<hl?i-b:hl;
                }
                bit=in;
                b=i;
            }
        }
        printf("%d\n",hl);

    }
    return 0;
}

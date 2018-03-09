//uva Q11689 2018/1/22

#include <stdio.h>

typedef struct{
    int e,c,f,bottle,newsoda;  //bottle 传穝═耻Ч逞瞺 newsoda传ぶ═
}soda;


int main(){
    int n=0;

    scanf("%d ",&n);

    for(int k=0;k<n;k++){
        soda t={0};
        scanf("%d %d %d",&t.e,&t.f,&t.c);


        while(t.e+t.f+t.bottle>=t.c){
            int temp=(t.e+t.f+t.bottle)/t.c;

            t.newsoda+=(t.e+t.f+t.bottle)/t.c;
            t.e=(t.e+t.f+t.bottle)%t.c;  //传Ч逞瞺
            t.f=0;
            t.bottle=temp;//传穝═瞺计
        }

        printf("%d\n",t.newsoda);
    }

    return 0;
}

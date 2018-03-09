//uva Q11494 2018/1/22

#include <stdio.h>

typedef struct{
    int x,y;
}coordinate;

int ll(int in){
    return in>0?in:-in;
}

int main(){
    coordinate s,e;
    while(scanf("%d %d %d %d",&s.x,&s.y,&e.x,&e.y),s.x!=0||s.y!=0||e.x!=0||e.y!=0){
        if(s.x==e.x&&s.y==e.y)
            printf("0\n");
        else if(s.x==e.x||s.y==e.y)
            printf("1\n");
        else if(ll(s.x-e.x)==ll(s.y-e.y))
            printf("1\n");
        else
            printf("2\n");
    }


    return 0;
}

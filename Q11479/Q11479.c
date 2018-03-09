//uva Q11479 2018/1/22

#include <stdio.h>

typedef struct{
    long long a,b,c;
}tra;


int main(){
    int m=0;
    scanf("%d",&m);
    for(int k=1;k<=m;k++){
        tra in;
        scanf("%lld %lld %lld",&in.a,&in.b,&in.c);

        if(in.a<=0||in.b<=0||in.c<=0||in.a+in.b<in.c||in.a+in.c<in.b||in.b+in.c<in.a)
            printf("Case %d: Invalid\n",k);
        else if(in.a==in.b&&in.b==in.c)
            printf("Case %d: Equilateral\n",k);
        else if(in.a==in.b||in.a==in.c||in.b==in.c)
            printf("Case %d: Isosceles\n",k);
        else
            printf("Case %d: Scalene\n",k);

    }

    return 0;
}

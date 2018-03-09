//uva Q11172 2018/1/20

#include <stdio.h>

int main(){
    int m=0;
    long a,b;
    scanf("%d",&m);
    for(int k=0;k<m;k++){
        scanf("%ld %ld",&a,&b);

        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");
    }

    return 0;
}

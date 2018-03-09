//uva Q10963 2018/1/20

#include <stdio.h>

int main(){
    int m=0,w=0,n=0,s=0,sub=0,yes;
    scanf("%d",&m);

    for(int k=0;k<m;k++){
        yes=1;
        scanf("%d",&w);


        scanf("%d %d",&n,&s);
        sub=n-s;

        for(int j=1;j<w;j++){
            scanf("%d %d",&n,&s);
            if(n-s!=sub){
                printf("no\n");
                yes=0;
            }
        }
        if(yes==1)
            printf("yes\n");
        printf("\n");
    }

    return 0;
}

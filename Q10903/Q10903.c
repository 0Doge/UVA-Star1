//uva Q10903 2018/1/20

#include <stdio.h>


int winn(char cp1[],char cp2[]){
    if(cp1[0]==cp2[0])
        return 0;
    else if((cp1[0]=='r'&&cp2[0]=='s')||(cp1[0]=='s'&&cp2[0]=='p')||(cp1[0]=='p'&&cp2[0]=='r'))
        return 1;
    else
        return 2;

}

int main(){
    int n=0,k=0,p1=0,p2=0;
    char cp1[10],cp2[10];


    while(scanf("%d",&n),n!=0){
        scanf("%d",&k);
        int win[100]={0},lose[100]={0};

        if(p1!=0)
            printf("\n");

        for(int l=0;l<k*n*(n-1)/2;l++){
            scanf("%d %s %d %s",&p1,cp1,&p2,cp2);
            if(winn(cp1,cp2)==1){
                win[p1]++;
                lose[p2]++;
            }
            else if(winn(cp1,cp2)==2){
                win[p2]++;
                lose[p1]++;
            }
        }


        for(int i=1;i<=n;i++ ){
            if(win[i]==0&&lose[i]==0)
                printf("-\n");
            else
                printf("%.3f\n",win[i]*1.0/(win[i]+lose[i]));

        }

    }
    return 0;
}

//uva Q11059 2018/1/20

#include <stdio.h>
long maximum(int s[],int n){
    long max=s[0],temp=s[0];

    for(int i=1;i<n;i++){
        temp=temp*s[i];
        if(temp>max)
            max=temp;
    }
    return max;
}


int main(){
    int n=0,s[18]={0},casem=0;

    while(scanf("%d",&n)!=EOF){
        casem++;
        for(int i=0;i<n;i++){
            scanf("%d",&s[i]);
        }


        long max=0;
        for(int i=0;i<n;i++ ){
            if(max<maximum(s+i,n-i))
                max=maximum(s+i,n-i);
        }
        printf("Case #%d: The maximum product is %ld.\n\n",casem,max);

    }



    return 0;
}

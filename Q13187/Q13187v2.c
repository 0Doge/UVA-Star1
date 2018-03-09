//uva Q13187 2018/1/23

#include <stdio.h>


int main(){

    FILE *fout;
    fout=fopen("ans.txt","w+t");
    int t=0;
    scanf("%d",&t);

    for(int k=0;k<t;k++){
        long long s=0;
        scanf("%lld",&s);
        fprintf(fout,"%lld\n",(s+1)*(s+1)-1); //S=¡Ì(n+1)-¡Ì1  => S+1=¡Ì(n+1) =>(S+1)^2=n+1 => n=(S+1)^2-1
    }

    return 0;
}

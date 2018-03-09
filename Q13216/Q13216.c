//uva Q13216 2018/1/23

#include <stdio.h>
#include <string.h>

int main(){
    int n=0;
    scanf("%d",&n);

    for(int k=0;k<n;k++){
        char in[1005]={0};
        scanf("%s",in);

        if(in[strlen(in)-1]=='0'&&strlen(in)==1)
            printf("1\n");
        else if(in[strlen(in)-1]=='1'&&strlen(in)==1)
            printf("66\n");
        else if(in[strlen(in)-1]=='0'||in[strlen(in)-1]=='5')
            printf("76\n");
        else if(in[strlen(in)-1]=='1'||in[strlen(in)-1]=='6')
            printf("16\n");
        else if(in[strlen(in)-1]=='2'||in[strlen(in)-1]=='7')
            printf("56\n");
        else if(in[strlen(in)-1]=='3'||in[strlen(in)-1]=='8')
            printf("96\n");
        else if(in[strlen(in)-1]=='4'||in[strlen(in)-1]=='9')
            printf("36\n");

    }

    return 0;
}

#include<stdio.h>

int main (){
    int inputi=0,inputj=0;

    while(scanf("%d %d",&inputi,&inputj)!=EOF){

    int outputcl=0,temp=0,cltemp=0;

        printf("%d %d ",inputi,inputj);
        if(inputi>inputj){   //讓小ㄉ在前
            temp=inputi;
            inputi=inputj;
            inputj=temp;
        }

        for(int i=inputi;i<=inputj;i++){
            temp=i;
            cltemp=1;  //1的時候不會進迴圈 但是算數列
            while(temp!=1){
                if(temp%2) temp=temp*3+1;
                else    temp=temp/2;
                cltemp++;
            }
            if(cltemp>outputcl) outputcl=cltemp;
        }
        printf("%d\n",outputcl);
    }
return 0;
}

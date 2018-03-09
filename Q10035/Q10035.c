#include<stdio.h>
int addc(int inl,int inr){
    int c=0,ccum=0,temp=0;
    if(inr>inl){
        temp=inr;
        inr=inl;
        inl=temp;
    }
    while(inl>0){
        c=((inl%10+inr%10)+c)/10;
        inr/=10;
        inl/=10;
        ccum+=c;
    }
    return ccum;
}
int main(){

int inl=0,inr=0;

while(scanf("%d %d",&inl,&inr)&&inl!=0||inr!=0){
        if(addc(inl,inr)==1)
            printf("1 carry operation.\n");
        else if(addc(inl,inr)>1)
            printf("%d carry operations.\n",addc(inl,inr));
        else
            printf("No carry operation.\n");
}
    return 0;
}

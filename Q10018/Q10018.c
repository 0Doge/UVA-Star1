#include<stdio.h>
unsigned int lrtorl(unsigned int in){
    unsigned int ans=in%10;
    while(in/=10)
        ans=ans*10+in%10;
    return ans;
}


int main(){

unsigned int n=0,p=0;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&p);
    int cum=1;
    p+=lrtorl(p);
    while(p!=lrtorl(p)){
        p+=lrtorl(p);
        cum++;
    }
    printf("%d %u\n" , cum,lrtorl(p) );
}
    return 0;
}

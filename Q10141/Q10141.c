#include<stdio.h>
int maxn(int in[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(in[i]>max)
            max=in[i];
    }
    return max;
}
int cheap(double money[],int cp[],int max,int n){
    double cheap=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(cp[i]==max&&(cheap==0||money[i]<cheap)){
            cheap=money[i];
            ans=i;
        }
    }
    return ans;
}

int main(){
    int n=0,p=0,cp[1000],max=0,No=0;
    char thing[85],comp[1000][500];
    double money[1000];
while(scanf("%d %d",&n,&p)!=EOF&&(n!=0||p!=0)){
    for(int j=0;j<=n;j++){
        fgets(thing,85,stdin);
        }
    for(int j=0;j<p;j++){
        fgets(comp[j],500,stdin);
        scanf("%lf %d",&money[j],&cp[j]);
        for(int k=0;k<=cp[j];k++) fgets(thing,85,stdin);
    }
    No++;
    max=maxn(cp,p);
    printf("RFP #%d\n%s\n",No,comp[cheap(money,cp,max,p)]);
}
    return 0;
}

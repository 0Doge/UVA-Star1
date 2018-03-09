#include<stdio.h>

int main(){
    int c=0,n=0,stu[1000]={0};
    double sum=0,ner=0,ans=0;
    scanf("%d",&c);
    for(int k=0;k<c;k++){
        scanf("%d",&n);
        sum=0;
        ans=0;
        for(int j=0;j<n;j++){
            scanf("%d",&stu[j]);
            sum+=stu[j];
        }
        ner=sum/n;
        for(int j=0;j<n;j++){
            if(stu[j]>ner)
            ans++;
        }
        printf("%.3f%\n",ans/n*100);
    }
    return 0;
}

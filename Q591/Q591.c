#include<stdio.h>

int main(){
    int n=0,set=0;
    while(set++,scanf("%d",&n)&&n!=0){
        int sum=0,arrn[50],k=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arrn[i]);
            sum+=arrn[i];
        }
        sum/=n;
        for(int i=0;i<n;i++)
            if(arrn[i]>sum) k+=arrn[i]-sum;
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",set,k);
    }
    return 0;
}

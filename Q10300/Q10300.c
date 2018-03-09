#include<stdio.h>

int main(){
    double n=0,f=0,one=0,two=0,three=0,ans=0;
    scanf("%lf",&n);
    for(int i=0;i<n;i++){
        scanf("%lf",&f);
        for(int j=0;j<f;j++){
            scanf("%lf %lf %lf",&one,&two,&three);
            if(two!=0)
                ans+=one*three;
        }
        printf("%.0lf\n",ans);
        ans=0;
    }
    return 0;
}

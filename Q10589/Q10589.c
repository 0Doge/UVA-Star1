#include<stdio.h>
int main(){
    int a,n,f;
    float N[2],ans=0;
    while(scanf("%d %d",&n,&a),a!=0||n!=0){
        int bit=0;
        for(int k=0;k<n;k++){
            scanf("%f %f",&N[0],&N[1]);
            if(N[0]*N[0]+N[1]*N[1]<=a*a&&(N[0]-a)*(N[0]-a)+(N[1]-a)*(N[1]-a)<=a*a&&(N[0]-a)*(N[0]-a)+N[1]*N[1]<=a*a&&N[0]*N[0]+(N[1]-a)*(N[1]-a)<=a*a)
                bit++;
        }
        f=(a*a*bit%n)%100000;
        while(f!=0&&f<10000)
            f*=10;

        if(f!=0)
            printf("%d.%d\n",a*a*bit/n,f);
        else
            printf("%d.00000\n",a*a*bit/n);
    }

    return 0;
}

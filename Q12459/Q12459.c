//uva Q12459 2018/1/24

#include <stdio.h>

long long sum(int in){
    long long f1=1,f2=1,temp=0;
    for(int i=1;i<in;i++){
        temp=f1;
        f1=f1+f2;
        f2=temp;
    }
    return f1;
}

int main(){


    int n=0;
    while(scanf("%d",&n),n!=0){
        printf("%lld\n",sum(n));
    }
    return 0;
    //f(n)=f(n-1)+f(n-2)
    //f(n-1)=f(n)��������  =>�W�@�����`�� �������e����������
    //f(n-2)=f(n)��������  =>�W�W�@�����`��(�W�@�����`������) �u�����e��������
}

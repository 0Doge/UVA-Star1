// Q11936 2018/1/24

#include <stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    for(int k=0;k<n;k++){
        int side[3]={0};
        scanf("%d %d %d",&side[0],&side[1],&side[2]);


        if(side[0]+side[1]>side[2]&&side[0]+side[2]>side[1]&&side[1]+side[2]>side[0])
            printf("OK\n");
        else
            printf("Wrong!!\n");

    }
    return 0;
}

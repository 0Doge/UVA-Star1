// Q11942 2018/1/24

#include <stdio.h>

int SortCheck(int in[]){
    int check=0;
    for(int i=0;i<9;i++){
        if(in[i]<in[i+1])
            check+=1;
        else
            check-=1;
    }
    return check==9||check==-9?1:0;

}

int main(){
    int n=0;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    for(int k=0;k<n;k++){
        int arr[10]={0};
        for(int i=0;i<10;i++){
            scanf("%d",&arr[i]);
        }

        if(SortCheck(arr)==1)
            printf("Ordered\n");
        else
            printf("Unordered\n");


    }
    return 0;
}

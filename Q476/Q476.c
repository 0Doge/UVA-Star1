#include<stdio.h>

int main (){
    float incorner[10][4],bit[2];
    char r;
    int i=0;
    while(scanf("%s",&r)&&r!='*'){
        if(r=='*')break;
        scanf("%f %f %f %f",&incorner[i][0],&incorner[i][1],&incorner[i][2],&incorner[i][3]);
        i+=1;
    }
    int k=1,yn=0;

    while(scanf("%f %f",&bit[0],&bit[1])){
        if(bit[0]>9999.9&&bit[1]>9999.9) break;
        yn=0;
        for(int j=0;j<i;j++){
            if(incorner[j][0]<bit[0]&&bit[0]<incorner[j][2]&&incorner[j][3]<bit[1]&&bit[1]<incorner[j][1]){
                printf("Point %d is contained in figure %d\n",k,j+1);
                yn=1;
            }

        }
        if(yn==0)
             printf("Point %d is not contained in any figure\n",k);
        k++;
    }
return 0;
}

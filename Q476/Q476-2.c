#include<stdio.h>
int bitinr(float b1,float b2,float cor[][4],int i){
    if(cor[i][0]<b1&&b1<cor[i][2]&&cor[i][3]<b2&&b2<cor[i][1])
        return 1;
    return 0;
}


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
            if(bitinr(bit[0],bit[1],incorner,j)==1){
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

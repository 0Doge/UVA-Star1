//uva Q11498 2018/1/22

#include <stdio.h>

typedef struct{
    int x,y;
}coordinate;

void place(coordinate division,coordinate bit){
    if(division.x==bit.x||division.y==bit.y)
        printf("divisa\n");
    else if(division.x<bit.x&&division.y<bit.y)
        printf("NE\n");
    else if(division.x>bit.x&&division.y<bit.y)
        printf("NO\n");
    else if(division.x>bit.x&&division.y>bit.y)
        printf("SO\n");
    else if(division.x<bit.x&&division.y>bit.y)
        printf("SE\n");
}

int main(){
    coordinate division,bit[1000];
    int k=0;

    while(scanf("%d",&k),k!=0){
        scanf("%d %d",&division.x,&division.y);
        for(int i=0;i<k;i++){
            scanf("%d %d",&bit[i].x,&bit[i].y);
            place(division,bit[i]);
        }
    }
    return 0;
}

//uva Q12439 2018/1/24

#include <stdio.h>
typedef struct{
    int year,day;
    char month[10];
}date;

int feb(date start,date end);
int leap(int year);  //閏年判定

int main(){
    int t=0;
    scanf("%d",&t);
    for(int k=1;k<=t;k++){
        date start,end;
        char bit;
        scanf("%s %d%c %d",start.month,&start.day,&bit,&start.year);
        scanf("%s %d%c %d",end.month,&end.day,&bit,&end.year);

        printf("Case %d: %d\n",k,feb(start,end));
    }

    return 0;

}
int leap(int year){
    if(year%400==0)
        return 1;
    else if(year%4==0&&year%100!=0)
        return 1;
    return 0;
}

int feb(date start,date end){
    int day=0;
    if(leap(start.year)==1){  //開始時間<=2/29
        if(start.month[0]=='J'&&start.month[1]=='a')
            day+=1;
        else if(start.month[0]=='F'&&start.day<=29)
            day+=1;
    }

    for(int i=start.year+1;i<=end.year;i++){
        if(leap(i)==1)
            day+=1;
    }


    if(end.month[0]=='J'&&end.month[1]=='a') ////結束時間<2/29  day-1
        day-=1;
    else if(end.month[0]=='F'&&end.day<29)
        day-=1;

    return day;
}

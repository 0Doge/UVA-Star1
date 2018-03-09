//uva Q11219 2018/1/21

#include <stdio.h>

typedef struct{
    int year;
    int month;
    int day;
}date;


int age(date now,date bir){
    if(now.year-bir.year<0)
        return -1;
    else if(now.year-bir.year==0&&now.month-bir.month<0)
        return -1;
    else if (now.year-bir.year==0&&now.month-bir.month==0){
        if(now.day-bir.day<0)
            return -1;
    }


    if(now.year-bir.year>131)
        return -2;
    else if (now.year-bir.year==131&&now.month-bir.month>0)
        return -2;
    else if (now.year-bir.year==131&&now.month-bir.month==0){
        if(now.day-bir.day>0)
            return -2;
    }

    if(now.month-bir.month>0)
        return now.year-bir.year;
    else if(now.month-bir.month==0&&now.day-bir.day>=0)
        return now.year-bir.year;
    else
        return now.year-bir.year-1;


}

int main(){
    int n=0;
    char del;
    date now,bir;

    scanf("%d",&n);
    for(int k=1;k<=n;k++){
        scanf("%d%c%d%c%d",&now.day,&del,&now.month,&del,&now.year);
        scanf("%d%c%d%c%d",&bir.day,&del,&bir.month,&del,&bir.year);


        //printf("%d %d %d\n",now.year,now.month,now.day);
        //printf("%d %d %d\n",bir.year,bir.month,bir.day);

        if(age(now,bir)==-1)
            printf("Case #%d: Invalid birth date\n",k);
        else if(age(now,bir)==-2)
            printf("Case #%d: Check birth date\n",k);
        else
            printf("Case #%d: %d\n",k,age(now,bir));
    }

    return 0;
}

//uva Q12019 2018/1/24

#include <stdio.h>
#include <string.h>

int daysum(int month,int day);

int main(){
    int n=0;
    scanf("%d ",&n);
    for(int k=0;k<n;k++){
        int month=0,day=0;
        scanf("%d %d",&month,&day);

        switch(daysum(month,day)%7){
            case 0:
                printf("Friday\n");
                break;
            case 1:
               printf("Saturday\n");
                break;
            case 2:
                printf("Sunday\n");
                break;
            case 3:
                printf("Monday\n");
                break;
            case 4:
                printf("Tuesday\n");
                break;
            case 5:
                printf("Wednesday\n");
                break;
            default:
                printf("Thursday\n");
                break;
        }

    }
    return 0;
}

int daysum(int month,int day){
    int sum=0;

    switch(month){
            case 1:
                sum+=0;
                break;
            case 2:
                sum+=31;
                break;
            case 3:
                sum+=59;
                break;
            case 4:
                sum+=90;
                break;
            case 5:
                sum+=120;
                break;
            case 6:
                sum+=151;
                break;
            case 7:
                sum+=181;
                break;
            case 8:
                sum+=212;
                break;
            case 9:
                sum+=243;
                break;
            case 10:
                sum+=273;
                break;
            case 11:
                sum+=304;
                break;
            case 12:
                sum+=334;
                break;
            default:
                break;
    }
    sum+=day;
    return sum;
}

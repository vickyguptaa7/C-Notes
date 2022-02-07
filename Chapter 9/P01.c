#include<stdio.h>
 typedef struct TimeStamp
{
    int Day;
    int Month;
    int Year;
    int hours;
    int minutes;
    int seconds;
}TS;

void Display(TS T)
{
printf("The TimeStamp : %d:%d:%d:%d:%d:%d \n",T.Day,T.Month,T.Year,T.hours,T.minutes,T.seconds);
}

int Compare(TS T1,TS T2)
{
if(T1.Year>T2.Year)
{return 1;}
if(T1.Year<T2.Year)
{return -1;}

if(T1.Month>T2.Month)
{return 1;}
if(T1.Month<T2.Month)
{return -1;}

if(T1.Day>T2.Day)
{return 1;}
if(T1.Day<T2.Day)
{return -1;}

if(T1.hours>T2.hours)
{return 1;}
if(T1.hours<T2.hours)
{return -1;}
if(T1.minutes>T2.minutes)
{return 1;}
if(T1.minutes<T2.minutes)
{return -1;}

if(T1.seconds>T2.seconds)
{return 1;}
if(T1.seconds<T2.seconds)
{return -1;}

return 0;

}

int main() {

    TS T1={2,3,2010,4,23,12};
    TS T2={2,3,2010,4,23,12};
    
    Display(T1);
    Display(T2);

    int a=Compare(T1,T2);
    printf("TimeStamp Comaparison Function Returns : %d",a);
    return 0;
}
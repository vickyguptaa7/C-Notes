#include<windows.h>
#include<stdio.h>
int main (){
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    printf(" Today's Date : %d/%d/%d",stime.wDay,stime.wMonth,stime.wYear);
    return 0;
}
 
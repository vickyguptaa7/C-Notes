#include<stdio.h>
int main (){
    char st1[25];
    char st2[25];
    char c;
    int i=0;

    printf("Enter The Value Of The First String : ");
    scanf("%s",st1);

    printf("Enter The Value Of The String Character By Character : \n");
    while(c!='\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        st2[i]=c;
        i++;
    
    }
    st2[i-1]='\0';

    printf("The Value Of The First String : %s \n",st1);
    printf("The Value Of The Seconf String : %s \n",st2);
    printf("Comparing String First And Second : %d",strcmp(st1,st2));
    

    return 0;
}
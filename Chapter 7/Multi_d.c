#include <stdio.h>
int main()
{
    int Students;
    int Subjects;
    printf("No Of Students And Subjects : \n");
    scanf("%d %d", &Students, &Subjects);

    int arr[Students][Subjects];
    for (int i = 0; i < Students; i++)
    {
        for (int j = 0; j < Subjects; j++)
        {
            printf("Student %d And The Marks In Subject  %d : \n ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < Students; i++)
    {
        for (int j = 0; j < Subjects; j++)
        {
            printf("Student %d And The Marks In Subject  %d : %d \n ", i + 1, j + 1, arr[i][j]);
        }
    }
    return 0;
}
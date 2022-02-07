#include <stdio.h>

void Shift(int s, int arr[], int l, int n);

void Display(int arr[], int l);

int main()
{

    int l; // Array Length
    printf("Enter The Length Of The Array : ");
    scanf("%d", &l);

    int Array[l]; // Array Input
    printf("Enter Any %d  Number : \n", l);
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &Array[i]);
    }
    int s; // Shift For Left And Right
    printf("To Shift The Array To Right And Left Press 0 or 1 : ");
    scanf("%d", &s);

    int n; // Shifting Array Upto n places
    printf("Shift To Upto : \n");
    scanf("%d", &n);

    printf("Array \n");
    Display(Array, l); // Function To Print Array

    Shift(s, Array, l, n);
    printf("Rotated Array\n"); // Function To Shift The Array

    Display(Array, l);

    return 0;
}

void Shift(int s, int arr[], int l, int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        if (s == 0)
        {
            temp = arr[l - 1];
            for (int j = l - 1; j > 0; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[0] = temp;
        }
        else
        {
            temp = arr[0];
            for (int j = 1; j < l; j++)
            {
                arr[j - 1] = arr[j];
            }
            arr[l - 1] = temp;
        }
    }
}

void Display(int *arr, int l)
{
    for (int i = 0; i < l; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

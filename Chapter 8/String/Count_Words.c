#include <stdio.h>
#include <string.h>

int CountWords(char *Array, int a);

void Remove_Extra_Spaces(char *Array);

int main()
{
    char sentence[100];
    printf("Enter Any Sentence : ");
    gets(sentence);

    int n = strlen(sentence);   // Length OF The String 

    Remove_Extra_Spaces(sentence);  // Function Call - Removes The Extra Spaces From The String

    int a = CountWords(sentence, n);    // Function Call - Count The No Of Words In The String

    printf("Number Of Words In The Senetence : %d", a);
  
    return 0;
}

int CountWords(char *Array, int a)
{
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        if (Array[i] == ' ')
        {
            count=count+1;
        }
    }

    return count+1;
}

void Remove_Extra_Spaces(char *Array)
{
    char p[strlen(Array)];
    int i = 0;
    while (Array[i] != '\0')
    {
        if (Array[0] == ' ' || Array[i] == ' ' && Array[i + 1] == ' ') // Removes The Starting And In 
        {                                                             //  In Between Spaces
            for (int j = i; Array[j] != '\0'; j++)
            {
                Array[j] = Array[j + 1];
            }
            i--;
        }

        else if (Array[i] == ' ' && Array[i + 1] == '\0')  // Removes The Ending Spaces
        {
            Array[i] = Array[i + 1];
        }

        i++;
    }
}


#include<stdio.h>
int main()
{
    char a[255];
    int i, length = 0;
    printf("input a string:");
    if (fgets(a, sizeof(a), stdin) != NULL)
    {
        while (a[length] != '\0')
        {
            length++;
        }
        if (length > 0 && a[length - 1] == '\n')
        {
            length--;
        }
        for (i = length - 1; i >= 0; i--)
        {
            printf("%c", a[i]);
        }
        printf("\n");
    }
    return 0;
}
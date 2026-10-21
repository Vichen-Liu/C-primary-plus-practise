#include<stdio.h>
#include<string.h>
int main()
{
    char word[40];
    char new_word[40];
    printf("input the word:");
    scanf("%s",word);
    int length=strlen(word);
    for(int i=0;word[i]!='\0';i++)
    {
        new_word[i]=word[length-1-i];
    }
    printf("The new word is: %s",new_word);
    return 0;
}
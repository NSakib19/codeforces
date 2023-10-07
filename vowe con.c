#include<stdio.h> ///string = combination of character
int main()
{
    char letter;
    scanf("%c",&letter);
    if(letter == 'a' || letter =='A' || letter =='E'  || letter =='e' || letter =='I' || letter =='i' || letter =='O' || letter =='o' || letter =='U' || letter =='u' )
    {
        printf("Vowel");

    }
    else
    {
        printf("consonant");
    }
}

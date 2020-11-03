
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string x = get_string("Text: ");
    int letters = 0;
    int words = 0;
    int sentences =0;
    
    for (int i =0; i < strlen(x); i++)
    {
        if (isalnum(x[i]))
        {
            letters+=1;
        }
        else if (isspace(x[i]))
        {
            words+=1;
        }
        else if (x[i]=='.' || x[i]=='!' || x[i]=='?')
        {
            sentences +=1;
        }

    }
    words+=1;

    // L is average number of letters per 100 words
    // S is average number of sentences per 100 words
    float L = (100.0/words) *letters;
    float S = (sentences *100.0)/words;

    float index = 0.0588 * L - 0.296 * S - 15.8;


//    printf("Letters: %i\n", letters);
//    printf("Words: %i\n", words);
//    printf("Sentences: %i\n", sentences);

    if (index <=1)
    {
        printf("Before Grade 1\n");
    }
    else if (index>1 && index <=16)
    {
        printf("Grade %i\n", 

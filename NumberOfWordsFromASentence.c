/**
 * Author : Maulidan Nashuha
 * Date : 4 Oktober 2019
 * IG & Github : @maulidandev
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

//prototipe
char* replacePunctuation(char *);
int countWord(char *);

int main(int argc, char const *argv[])
{
    char string[300];

    printf("Masukkan kalimat : ");
    scanf(" %[^\n]", string);

    replacePunctuation(string);
    int numberOfWords = countWord(string);

    printf("Banyaknya kata : %d\n\n", numberOfWords);

    return 0;
}

char* replacePunctuation(char *string){
    while (*string != '\0')
    {
        if (ispunct(*string))
            *string = ' ';
        
        string++;
    }
    
    return string;
}

int countWord(char *string){
    int numberOfWords = 0;

    char *word = strtok(string," ");
    while (word!= NULL)
    {
        numberOfWords++;

        word = strtok (NULL, " ");
    }

    return numberOfWords;
}
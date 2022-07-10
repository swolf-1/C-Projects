#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define size 21

int ScrableScore(char w[]);

int main(){

    char word[size];
    printf("Eisagete mia leksi (to poly 20 xaraktires):");
    do{
        gets(word);

        if(strlen(word) > 20)
            printf("Parakalw eisagete leksi me to poly 20 xarakrires:");

    }while(strlen(word) > 20);

    int score;
    score = ScrableScore(word);
    printf("To score tis leksis afth einai:%d\n",score);
}

int ScrableScore(char w[])
{
    int counter = 0;

    for(int i=0; i < strlen(w); i++)
    {
        if(isupper(w[i]))
            if (w[i]=='A' || w[i]=='E' || w[i]=='I' || w[i]=='L' || w[i]=='N' || w[i]=='O' || w[i]=='R' || w[i]=='S' || w[i]=='T' || w[i]=='U')
                counter+=1;
            else if(w[i]=='D' || w[i]=='G')
                counter+=2;
            else if(w[i]=='B' || w[i]=='C' || w[i]=='M' || w[i]=='P')
                counter+=3;
            else if(w[i]=='F' || w[i]=='H' || w[i]=='V' || w[i]=='W' || w[i]=='Y')
                counter+=4;
            else if(w[i]=='K')
                counter+=5;
            else if(w[i]=='J' || w[i]=='X')
                counter+=8;
            else
                counter+=10;
    }

    return counter;

}

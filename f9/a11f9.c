#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define maxSize 100

int readFromFile(FILE *file,char table[],int size);
void writeToFile(FILE *outFile,char table[],int *tp,int *pot);
int main(){

    int totalPoints=0,playersOverTen=0,flag=1;
    char buffer[maxSize];
    FILE *myData,*newData;

    myData = fopen("i11f9.dat","r");
    if(myData == NULL) Error("Can't open %s", "i11f9.dat");

    newData = fopen("baso11f9.dat","w");
    if(newData == NULL) Error("Can't open %s", "baso11f9.dat");

    fprintf(newData,"ONOMATEPWNYMO                    PONTOI\n");
    fprintf(newData,"---------------------------------------\n");
    while(flag){

       flag = readFromFile(myData,buffer,maxSize);

       if(flag)
        writeToFile(newData,buffer,&totalPoints,&playersOverTen);
    }
    fprintf(newData,"---------------------------------------\n");
    fprintf(newData,"%-28s %10d\n","SYNOLO PONTWN",totalPoints);
    fprintf(newData,"%-28s %10d\n","SYNOLO PAIKTVN >= 10",playersOverTen);

    fclose(myData);
    fclose(newData);
}

int readFromFile(FILE *file,char table[],int size){

    if(fgets(table,maxSize,file))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void writeToFile(FILE *outFile,char table[],int *tp,int *pot){

    int number,points;
    char name[28];
    sscanf(table,"%d,%28[^,],%d",&number,name,&points);
    fprintf(outFile,"%-28s %10d\n",name,points);
    *tp+=points;

    if(points >=10)
        *pot+=1;

}

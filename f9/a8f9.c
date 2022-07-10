#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <stdlib.h>

void newFileMaker(FILE *oldFile,FILE *outFile);

int main(){
    FILE *myData,*newData;
    myData = fopen("i8f9.dat","r");
    if(myData == NULL) Error("Can't open %s", "i8f9.dat");

    newData = fopen("o8f9.dat","w");
    if(newData == NULL) Error("Can't open %s", "o8f9.dat");

    newFileMaker(myData,newData);


    fclose(myData);
    fclose(newData);
}

void newFileMaker(FILE *oldFile,FILE *outFile){

    char buffer[100];
    int code;
    double money;
    while(fgets(buffer,100,oldFile)){

        sscanf(buffer,"%d %lf",&code,&money);
        money += money * 0.2;
        fprintf(outFile,"%7d%13.1lf\n",code,money);

    }

}

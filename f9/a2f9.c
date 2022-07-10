#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <stdlib.h>


#define MaxLine 120

int main(){

    char studentName[30],buffer[MaxLine];
    int nscan,absences,studentsCounter=0,studentsMissing=0;
    FILE *myData,*newData;


    myData = fopen("i2f9.dat","r");
    if(myData == NULL) Error("Can't open %s", "i2f9.dat");

    newData = fopen("o2f9.dat","w");
    if(newData == NULL) Error("Can't open %s", "o2f9.dat");

    fprintf(newData,"ΟΝΟΜΑΤΕPWΝΥΜΟ                 ΑPΟΥSΙΕS \n");
    fprintf(newData,"----------------------------------------\n");

    while(fgets(buffer,MaxLine,myData)){

        sscanf(buffer,"%30[^,],%d",studentName,&absences);

        if(absences > 100){
            studentsMissing++;
            fprintf(newData,"%-30s %9d\n",studentName,absences);
        }
        studentsCounter++;
    }
    fprintf(newData,"----------------------------------------\n");
    fprintf(newData,"%-30s %9d\n","SYNOLO MATHITWN:",studentsCounter);
    fprintf(newData,"%-30s %9d\n","SYNOLO APONTWN:",studentsMissing);

    fclose(myData);
    fclose(newData);

}

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void ReadData(int r, int c, double pin[r][c]);
double findMax(int r, int c, double pin[r][c]);
void findMaxRowCol(double*maxGrade,int *maxCol,int *maxRow,int r, int c, double pin[r][c]);
void findMaxRow(double maxRow[],int r, int c, double pin[r][c]);
void printArray(double pin[],int size);
int main(){

    int classes,students;
    //Erwtima a1
    printf("Dwse ton arithmo ton tmimaton:");
    do{
        classes = GetInteger();
        if(classes > 21)
            printf("Ta sxoleia prepei na exoun mexri to polu 21 tmimata.Eisagete ksana ton arithmo ton tmimaton:");
    }while(classes > 21);

    printf("Dwse ton arithmo ton mathiton ana tmima:");
    do{
        students = GetInteger();
        if(students > 15)
            printf("Ta tmimata prepei na apotelountai mexri to polu 15 atoma.Eisagete ksana ton arithmo ton mathiton:");
    }while(students > 15);

    double Grades[classes][students],max,maxG,max_per_class[classes];
    int maxStudent,MaxClass;
    //Erwtima a2
    ReadData(classes,students,Grades);
    //Erwtima a3
    max = findMax(classes,students,Grades);
    //Erwtima a4
    printf("O megalyteros vathmos einai %g\n",max);
    //Erwtima b5
    findMaxRowCol(&maxG,&maxStudent,&MaxClass,classes,students,Grades);
    //Erwtima b6
    findMaxRow(max_per_class,classes,students,Grades);
    //Erwtima b7
    printf("O Megalyteros vathmos einai %g sto %do tmima  apo ton %do mathiti.\n",maxG,MaxClass+1,maxStudent+1);
    //Erwthma b8
    printArray(max_per_class,classes);
}


void ReadData(int r, int c, double pin[r][c]){
    int i,j;

    for(i = 0; i < r; i++){

        for(j = 0; j < c; j++){

            printf("Dwse arithmo:");
            pin[i][j]=GetReal();

        }
        printf("---------------\n");
    }
}

double findMax(int r, int c, double pin[r][c]){

    int i,j;
    double max = pin[0][0];

    for(i = 0; i < r; i++){

        for(j = 0; j < c; j++){

            if(pin[i][j] > max)
                max = pin[i][j];
        }
    }

    return max;
}

void findMaxRowCol(double *maxGrade,int *maxCol,int *maxRow,int r, int c, double pin[r][c]){
    int i,j;

    *maxGrade = pin[0][0];
    *maxCol = 0;
    *maxRow = 0;

    for(i = 0; i < r; i++){

        for(j = 0; j < c; j++){

            if(pin[i][j] > *maxGrade){
                *maxGrade = pin[i][j];
                *maxCol = j;
                *maxRow = i;

            }

        }
    }
}

void findMaxRow(double maxRow[],int r, int c, double pin[r][c]){

    int i,j;


    for(i = 0; i < r; i++){
        maxRow[i] = 0;
        for(j = 0; j < c; j++){

            if(pin[i][j] > maxRow[i])
                maxRow[i] = pin[i][j];

        }
    }
}

void printArray(double pin[],int size){

    int i;

    for(i = 0; i < size; i++)
        printf("Sto %do tmima megaluteros vathmos einai o %g\n",i+1,pin[i]);


}

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void ReadData(int r, int c, double pin[r][c]);
double findMax(int r, int c, double pin[r][c]);

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

    printf("-----------------\n");

    double Grades[classes][students],max;
    //Erwtima a2
    ReadData(classes,students,Grades);
    //Erwtima a3
    max = findMax(classes,students,Grades);
    //Erwtima a4
    printf("O megalyteros vathmos einai %g\n",max);

}

void ReadData(int r, int c, double pin[r][c]){

    int i,j;

    for(i = 0; i < r; i++){

        for(j = 0; j < c; j++){

            printf("Dwse pragmatiko arithmo:");
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

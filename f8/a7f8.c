#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <string.h>

#define max 20
typedef struct{
    int number;
    char type[20];
    int cc;
    char name[20];
    int days;
    float daily_rate;
    float total_cost;

}car_rentalT;


int read_data(car_rentalT rental[]);
int max_rent(car_rentalT rental[],int rents);
void print_data(car_rentalT rental[], int rents,int max_number);

int main(){

    car_rentalT r[max];

    int total_rents;
    total_rents = read_data(r);

    int best;
    best = max_rent(r,total_rents);

    print_data(r,total_rents,best);

}

int read_data(car_rentalT rental[]){

    int rents;
    int total = 0;

    printf("Dose ton arithmo ton enoikiaseon:");
    do{
    rents=GetInteger();
    if(rents > 20)
        printf("Oi enoikiaseis mporoun na einai eos kai 20.Eisagete ksana");
    }while(rents > 20);

    for(int i=0; i < rents; i++)
    {
        printf("Dose ta stoixeia tis enoikiasis %d\n",i);

        rental[i].number = i;

        printf("Dose marka:");
        gets(rental[i].type);
        printf("Dose kyvika:");
        rental[i].cc = GetInteger();
        printf("Dose onoma pelati:");
        gets(rental[i].name);
        printf("Dose imeres enoikiasis:");
        rental[i].days = GetInteger();
        printf("Dose timi ana imera:");
        rental[i].daily_rate = GetReal();
        rental[i].total_cost = (rental[i].days) * (rental[i].daily_rate);
        total += rental[i].total_cost;
    }
    return rents;
}

int max_rent(car_rentalT rental[],int rents)
{
    int max_cost = 0,max_numb = 0;

    for(int i=0; i < rents; i++)
        if (rental[i].total_cost > max_cost )
        {
            max_cost = rental[i].total_cost;
            max_numb = i;
        }

    return max_numb;
}

void print_data(car_rentalT rental[], int rents,int max_number)
{
    printf("%-7s %-20s %-10s %-5s %-5s %-6s %-8s\n","Number","Name","Type","CC","Days","Price","Total");
    printf("-------------------------------------------------------------------------\n");

     for( int i = 0; i < rents; i++)
        printf("%-7d %-20s %-10s %-5d %-5d %-6.02f %-8.02f\n",rental[i].number,rental[i].name,rental[i].type,rental[i].cc,rental[i].days,rental[i].daily_rate,rental[i].total_cost);

    printf("-------------------------------------------------------------------------\n");

    printf("Best car: %s %d rented for %.2f Euros.\n",rental[max_number].type,rental[max_number].cc,rental[max_number].total_cost);

}


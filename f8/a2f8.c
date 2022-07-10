#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <string.h>

#define N 20

typedef struct{
    int aprt_numb;
    char name[25];
    int square_meter;
    int heater_pieces;
    double heat_cost;
    double apartment_fees;

}tenantT;

int read_number_of_tenants(tenantT tenant[]);
void read_data(tenantT tenant[],int numb,double total_heat_cost,double total_building_fees,int *total_square_meter,int *total_heater_pieces);
void print_info(tenantT tenant[],int numb,double total_heat_cost,double total_building_fees,int total_square_meter,int total_heater_pieces);


int main(){

    tenantT tena[N];
    int number_of_tenants,tsm,thp;
    number_of_tenants = read_number_of_tenants(tena);

    double thc,tbf;
    printf("Dwse to poso thermanshs?");
    thc = GetReal();
    printf("Dwse to poso koinoxrhstwn?");
    tbf = GetReal();

    read_data(tena,number_of_tenants,thc,tbf,&tsm,&thp);
    print_info(tena,number_of_tenants,thc,tbf,tsm,thp);


}

int read_number_of_tenants(tenantT tenant[]){

    int m;
    printf("Dwse to plithos twn enoikwn?");
    do{
        m = GetInteger();

        if(m > 20)
            printf("Oi enoikoi mporoun na einai ews 20.Dokimaste ksana");

    }while(m > 20);

    return m;
}

void read_data(tenantT tenant[],int numb,double total_heat_cost,double total_building_fees,int *total_square_meter,int *total_heater_pieces){

    double cost_per_piece,cost_per_square_meter;
    *total_square_meter = 0;
    *total_heater_pieces = 0;

    for(int i=0; i < numb; i++)
    {
        tenant[i].aprt_numb = i;
        printf("Dwse to onomatepwnymo?");
        gets(tenant[i].name);
        printf("Dwse ta t.m?");
        tenant[i].square_meter = GetInteger();
        *total_square_meter += tenant[i].square_meter;
        printf("Dwse tis fetes?");
        tenant[i].heater_pieces = GetInteger();
        *total_heater_pieces += tenant[i].heater_pieces;
    }

    cost_per_piece = total_heat_cost / *total_heater_pieces;
    cost_per_square_meter = total_building_fees / *total_square_meter;

     for(int j=0; j < numb; j++)
     {
         tenant[j].apartment_fees = cost_per_square_meter * tenant[j].square_meter;
         tenant[j].heat_cost = cost_per_piece * tenant[j].heater_pieces;
     }

}

void print_info(tenantT tenant[],int numb,double total_heat_cost,double total_building_fees,int total_square_meter,int total_heater_pieces){
    double synolo;

    printf("%3s %25s %4s %5s %11s %11s %11s\n","A/A","ONOMATEPWNYMO","T.M.","FETES","POSO THERM.","POSO KOIN.","SYNOLO");
    printf("-----------------------------------------------------------------------------\n");

    for(int i=0 ; i < numb; i++)
    {
        synolo = tenant[i].heat_cost + tenant[i].apartment_fees;
        printf("%3d %25s %4d %5d %11.2lf %11.2lf %11.2lf\n",tenant[i].aprt_numb + 1,tenant[i].name,tenant[i].square_meter,tenant[i].heater_pieces,tenant[i].heat_cost,tenant[i].apartment_fees,synolo);
    }

    printf("-----------------------------------------------------------------------------\n");
    printf("%7s %26d %5d %11.2lf %11.2lf %11.2lf\n","SYNOLA:",total_square_meter,total_heater_pieces,total_heat_cost,total_building_fees,total_heat_cost + total_building_fees);
}

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <string.h>

#define total_cities 4

typedef struct{
    int code;
    char surname[16];
    long cost;
    int city;
}sellersT;

typedef struct{
    char name[15];
}cityT;

void rea_data(sellersT seller[],int numb);
void total_cost_per_city(sellersT seller[],int numb,long totals[]);
void print_data(long totals[],cityT city[]);

int main(){

    cityT cities[total_cities];
    strcpy(cities[0].name,"Thes/niki");
    strcpy(cities[1].name,"Athens");
    strcpy(cities[2].name,"Volos");
    strcpy(cities[3].name,"Hrakleio");

    int count;
    printf("Dwse to plithos twn politwn:");
    do{
        count = GetInteger();
        if(count > 20)
            printf("To plithw twn politwn prei na einai mikrotero i iso tou 20.Prospathiste ksana.");

    }while(count > 20);

    sellersT se[count];
    rea_data(se,count);

    long  tcpc[total_cities];
    total_cost_per_city(se,count,tcpc);

    print_data(tcpc,cities);
}

void rea_data(sellersT seller[],int numb){

    for(int i = 0; i < numb; i++)
    {
        printf("Pwlhths %d\n",i);
        printf("-----------------\n");
        printf("Eisagete ton kwdiko tou:");
        seller[i].code = GetInteger();
        printf("Eisagete ton epwnymo tou :");
        gets(seller[i].surname);
        printf("Eisagete to poso pwlhsewn:");
        seller[i].cost = GetLong();
        printf("Eisagete thn edra ergasias(1= Thes/niki, 2= Athens, 3= Volos, 4= Hrakleio):");
        do{
            seller[i].city = GetInteger();
            if(seller[i].city>4 || seller[i].city<1)
                printf("Wrong.Try again.");
        }while(seller[i].city>4 || seller[i].city<1);

    }
}

void total_cost_per_city(sellersT seller[],int numb,long totals[]){
        for(int j =0; j < total_cities; j++)
            totals[j]=0;

        for(int i=0; i < numb; i++)
            totals[seller[i].city-1]+= seller[i].cost;


}

void print_data(long totals[],cityT city[]){

    long total=0;
    printf("%11s %12s\n","PERIOXH","SYN.PWLHSEWN");
    printf("-------------------------\n");

    for(int i = 0; i < total_cities; i ++)
    {
        printf("%11s %12d\n",city[i].name,totals[i]);
        total+=totals[i];
    }
    printf("-------------------------\n");
    printf("%11s %12d\n","SYNOLO",total);

}

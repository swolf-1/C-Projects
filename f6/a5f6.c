#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void fill_it(int array[],int *counter);
void A_and_B(int *i,int *j);
int less_than_or_equal_to_A(int array[], int counter, int numb);
int greater_than_or_equal_to_B(int array[], int counter, int numb);
int greater_than_A_less_than_B(int numb_1,int numb_2,int total);
void print_results(int numbers,int numb_A,int numb_B,int less, int greater,int rest);

int main(){
int pin[100],i,A,B,less_counter,greater_counter,other;

fill_it(pin,&i);
A_and_B(&A,&B);

less_counter = less_than_or_equal_to_A(pin,i,A);
greater_counter = greater_than_or_equal_to_B(pin,i,B);
other = greater_than_A_less_than_B(less_counter,greater_counter,i);
print_results(i,A,B,less_counter,greater_counter,other);
}

void fill_it(int array[],int *counter){

int answer=1;
*counter=0;

while(answer == 1 && *counter < 100){

        printf("Dwse arithmo:");
        array[*counter] = GetInteger();
        (*counter)++;

        printf("Theleis na dwseis kai allos akeraious YES=1 or NO=0:");
        do{
        answer = GetInteger();
        if(answer!=1 && answer != 0)
            printf("Parakalw gia gia YES pliktrologiste 1 kai gia NO plikrologiste to 0:");
        }while(answer!=1 && answer != 0);
 }

}

void A_and_B(int *i,int *j){
    do{
        printf("Dwse ton 1o akeraio:");
        *i = GetInteger();

        printf("Dwse ton 2o akeraio:");
        *j = GetInteger();

        if(*i>*j)
            printf("Parakalw o 1os akeraios na einai mikroteros tou 2ou\n");

    }while(*i>*j);

}

int less_than_or_equal_to_A(int array[], int counter, int numb){

int sum=0;

for(int i = 0; i < counter; i++){
    if(array[i] <= numb)
        sum++;
}
return sum;
}


int greater_than_or_equal_to_B(int array[], int counter, int numb){

int sum=0;

for(int i = 0; i < counter; i++){
    if(array[i] >= numb)
        sum++;
}
return sum;
}

int greater_than_A_less_than_B(int numb_1,int numb_2,int total){

int m;
m = total - (numb_1+numb_2);
return m;
}

void print_results(int numbers,int numb_A,int numb_B,int less, int greater,int rest){

printf("Oi akeraioi arithmoi einai %d sto synolo\n",numbers);
printf("O arithmos A einai:%d\n",numb_A);
printf("O arithmos B einai:%d\n",numb_B);
printf("To plithos ton arithmon pou einai mikroteroi h isoi tou A einai:%d\n",less);
printf("To plithos ton arithmon pou einai megaliteroi h isoi tou B einai:%d\n",greater);
printf("To plithos ton arithmon pou einai megaliteroi tou A kai mikroteroi tou B einai:%d\n",rest);

}

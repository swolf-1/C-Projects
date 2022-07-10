#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define M 10
#define N 3

void fill_it(int row, int col,int array[row][col]);
int failed_counter(int row, int col, int array[row][col]);
int succeed_counter(int row, int col, int array[row][col]);
double percentage_change(int numb,int total);

int main(){

int grades[M][N];
fill_it(M,N,grades);

int failed;
failed = failed_counter(M,N,grades);

int succeed;
succeed = succeed_counter(M,N,grades);

printf("Plithos apotyxonton: %d %4.2lf%%\n",failed,percentage_change(failed,M));
printf("Plithos aristoyxon: %d %4.2lf%%",succeed,percentage_change(succeed,M));

}

void fill_it(int row, int col,int array[row][col]){

int i,j;

for(i=0; i < row; i++){

    printf("Mathitis %d\n",i+1);
    printf("--------------\n");

    for(j=0; j < col; j++){

            printf("Mathima %d:",j+1);
            do{
                array[i][j] = GetInteger();

                if(array[i][j] < 0 || array[i][j] > 20){
                    printf("Parakalw eisagete vathmo ap to 0 ews to 20\n");
                    printf("Mathima %d:",j+1);
                    }

              }while(array[i][j]<0 || array[i][j] >20);



    }
  }
}

int failed_counter(int row, int col, int array[row][col]){
int i,j,counter=0,sum;

for(i=0; i < row; i++){

    sum=0;

    for(j=0; j < col; j++){

        sum+=array[i][j];

    }
    if((double)sum / 3 < 9.5)
        counter++;
  }
  return counter;
}

int succeed_counter(int row, int col, int array[row][col]){

int i,j,counter=0,sum;

for(i=0; i < row; i++){

    sum=0;

    for(j=0; j < col; j++){

        sum+=array[i][j];

    }
    if((double)sum / 3 >= 18.5)
        counter++;
  }
  return counter;
}

double percentage_change(int numb,int total){


return ((double)numb / (double) total ) * 100;



}

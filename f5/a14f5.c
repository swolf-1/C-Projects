#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

//dilosi sinartisis
int number_of_elements();
void fill_it(int size,long a[]);
void print_it(int size,long a[]);
int FindMaxsPos(int size, long a[],int index[]);

int main(){
//stin metavliti m kratame tis theseis pou thelei na desmefsi o xristis meso tis sinartisis number_of_elements
int m;
printf("Dwse to plhthos twn stoixeiwn:");
m=number_of_elements();
//Dimiourgoume enan pinaka me tis theseis pou epithimi o xristis
long pin[m];
//ton gemizoume mesw tis sinartisis fill_it
fill_it(m,pin);
//ton emfanizoume meso tis sinartisis print_it
print_it(m,pin);
//dimiourgia pinaka pos gia na ton perasoume os orisma stin sinartisi FindMaxsPos opws orizei to protipo sthn ekfonisi
int pos[m];
//metavliti plithos epistrefoume tin sixnotita emfanisis tou megaliterou arithmou
int plithos = FindMaxsPos(m,pin,pos);
//Emfaniseis
printf("Plithos maximum %d\n",plithos);
printf("Positions of maximum ");
for(int i=0; i <m; i++){
    if(pos[i] != 0)
       printf("%d ",i);
 }
}

int number_of_elements(){

int number;
 do{
    number=GetInteger();
    if(number > 50)
        printf("Lathos!!!Parakalw dwste to plhthos twn stoixeiwn(ews kai 50)");
 }while(number >50);
 return number;
}

void fill_it(int size,long a[]){

for(int i=0; i<size; i++){
    a[i]=GetLong();

 }
}
void fill_it(int size,long a[]);

void print_it(int size,long a[]){

for(int i=0; i<size; i++)
    printf("%ld ",a[i]);
}

int FindMaxsPos(int size, long a[],int index[]){
//Arxikopioume to max me to proto stoixio tou pinaka
long max=a[0];
//Kai tin metavliti counter (pou metrame tin sixnotita emfaniseis tou megalyterou arithmou) me 1
int counter=1;
//arxikopioume ton pinaka index me 0,ektos tis protis thesis pou thn exoume orisei ws max
index[0]=1;
for(int i=1; i<size; i++) index[i]=0;
//saronoume ton pinaka mono 1 fora
for(int i=1; i<size; i++){
    //elegxoume kathe stoixio an einai megalitero kai an nai ,to orizoume ws max,midenizoume to counter kai midenizoume ola ta proigoumena stoixeia ston pinaka index
    //me afton ton tropo kai se sindiasmo me tis entoles ton grammwn 78-80 kathe fora pou tha vriskoume neo megalitero tha tha midenizete to counter kai o pinakas index
    //kai sthn sinexeia tha afksanete to counter kata 1 kai an vrethei isos me to max tha ksana afksithei.Ston pinaka index tha vazoume ton arithmo 1 kathe fora pou emfanizete
    //ena arithmos isos me ton max
    if (a[i]>max){
        max = a[i];
        counter=0;
        for(int j=0; j<i; j++) index[j]=0;
    }
    if(a[i] == max){
        counter++;
        index[i]=1;
    }
}
printf("\nmaximum %ld\n",max);
return counter;
}

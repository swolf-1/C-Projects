#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
long standar_tax,extra_tax,yearly_salary,total_tax;

printf("Dose to poso ton katharon etision apodoxon:");
yearly_salary=GetLong();

if(yearly_salary <= 10000){
    standar_tax = 0;
    extra_tax = 0;
}
 else if(yearly_salary <= 39000){
    standar_tax = 0;
    extra_tax = yearly_salary * 0.18;
 }
  else if(yearly_salary <= 49000){
    standar_tax = 5220;
    extra_tax = (yearly_salary - 39000) * 0.21 ;
 }
   else if(yearly_salary <= 59000){
     standar_tax = 7320;
     extra_tax = (yearly_salary - 49000) * 0.24 ;
 }
    else if(yearly_salary <= 85000){
       standar_tax = 9720;
       extra_tax = (yearly_salary - 59000)  * 0.28;
 }
     else if(yearly_salary <= 100000){
        standar_tax = 17000;
        extra_tax = (yearly_salary - 85000) * 0.33 ;
 }
      else if(yearly_salary <= 120000){
         standar_tax = 21950;
         extra_tax = (yearly_salary - 100000) * 0.38 ;
 }
      else if(yearly_salary <= 150000){
         standar_tax = 29550;
         extra_tax = (yearly_salary - 120000) * 0.43 ;
 }
       else if(yearly_salary <= 170000){
          standar_tax = 42450;
          extra_tax = (yearly_salary - 150000) * 0.49 ;
 }
        else {
           standar_tax = 52250;
           extra_tax = (yearly_salary - 170000) * 0.50 ;
 }
total_tax = standar_tax + extra_tax;
printf("Kathares etisies apodoxes:%ld\n",yearly_salary);
printf("Foros klimakos:%ld\n",standar_tax);
printf("Epiporsthetos foros:%ld\n",extra_tax);
printf("Sinolikos foros:%ld\n",total_tax);
}

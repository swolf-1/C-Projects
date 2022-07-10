#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
int kodikos,pagio;
long parousa_endixi,prohgoumeni_endixi,katanalwsh,axia;
double axia_fpa,synolo;
printf("Dwse ton kwdiko kathgorias timologion:");
kodikos = GetInteger();

printf("Dwse thn parousa endeixh tou metrhth:");
parousa_endixi = GetLong();

printf("Dwse thn prohgoumenh endeixh tou metrhth:");
prohgoumeni_endixi = GetLong();

katanalwsh = parousa_endixi - prohgoumeni_endixi;

if(kodikos == 1 || kodikos == 2)
    pagio = 20;
   else
    pagio = 100;

if(katanalwsh <= 200)
    axia = katanalwsh * 12;
   else if(katanalwsh <=500)
    axia = 200 * 12 + (katanalwsh - 200) * 15;
      else if (katanalwsh <= 1500)
       axia = 200 * 12 + 300 * 15 + (katanalwsh - 500) * 20;
         else
          axia = 200 * 12 + 300 * 15 + 1000 * 20 + (katanalwsh - 1500) * 30;


axia_fpa = (pagio + axia / 100) * 0.18;

synolo = axia_fpa + pagio + axia / 100;

printf("Katanalwsh reumatos se monades:%ld \n",katanalwsh);
printf("Axia reumatos(cent):%ld\n",axia);
printf("Pagio(eyro):%d\n",pagio);
printf("FPA(euro):%g\n",axia_fpa);
printf("Synoliko poso plhrwmhs(euro):%g",synolo);
}

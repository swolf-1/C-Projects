#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define size 30
void CommonCharBetween(char w1[],char w2[]);

int main(){

    char word_1[size],word_2[size];
    printf("Please insert two word to find the common characters.\n");
    printf("Word 1:");
    gets(word_1);
    printf("Word 2:");
    gets(word_2);
    CommonCharBetween(word_1,word_2);


}

void CommonCharBetween(char w1[],char w2[])
{
  char common[size],unique_common[30];
  int k=0,n=1;


  for(int i=0;w1[i] != '\0'; i++)
  {
      for(int j=0;w2[j] != '\0'; j++)
        if (w1[i] == w2[j])
            {
               common[k] = w1[i];
               k++;
               break;
            }


  }
  common[k]='\0';

  printf("Common Characters of %s in %s:%s\n",w1,w2,common);
  printf("----\n");

  unique_common[0] = common[0];
  unique_common[1] = '\0';
  int t=0,flag=1;
  for(int i = 1;common[i] != '\0'; i++ )
  {

      while(unique_common[t] != '\0')
      {
          if(common[i] == unique_common[t])
          {
            flag=0;
            break;
          }

            t++;
      }

      if(flag)
      {
          unique_common[t]=common[i];
          unique_common[t+1]='\0';
      }
      t=0;
      flag=1;
  }


    printf("Set of (unique) Common Characters of %s and %s:%s\n",w1,w2,unique_common);

}

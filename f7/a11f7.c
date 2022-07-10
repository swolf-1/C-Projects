#include <stdio.h>
#include <string.h>

#define LEN 80

void removeSpaces(char s[],char out[]);

int main(){
    char str[LEN],tmp[LEN],name[LEN],server[LEN];
    int index=0;

    printf("Get address:");
    gets(tmp);
    removeSpaces(tmp,str);

    while (str[index] != '@'){
        index++;
    }
    name[index]='\0';
    strncpy(name,str,index);

    index++;
    int j=0;
    while(index < strlen(str)){
        if(str[index] != '\0'){
            server[j]=str[index];
            j++;
        }
        index++;
    }
    server[j]='\0';


    printf("Original Address:%s\n",str);
    printf("Name:%s Len %d\n",name,strlen(name));
    printf("server:%s",server);

}

void removeSpaces(char s[],char out[])
{
  int j=0;
  for(int i=0; i < LEN; i++)
  {
     if(s[i] != ' ')
     {
         out[j]=s[i];
         j++;
     }
     if(s[i]=='\0')
      break;



  }


}

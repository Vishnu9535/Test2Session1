#include<stdio.h>
#include<string.h>
void input_string(char string[],char substring[])
{
   printf("input the string ");
   fgets(string,30,stdin);
   printf("enter the substring ");
   fgets(substring,20,stdin);
   
}
int str_index(char string[], char substring[])
{
   int index=0;
   for(int i=0;string[i]!='\0';i++)
    {
      if(substring[0]==string[i])
      {
         index=i;
        break;
        
        }
      
   }
   
   return index;
}
void output(char string[], char substring[], int index)
{
   printf("the index of the substring is %d",index);
}
int main(){
   int index;
   char string[30];
   char substring[20];
   input_string(string,substring);
   index=str_index(string,substring);
   output(string,substring,index);
   return 0;
}
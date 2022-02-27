#include<stdio.h>
void input_string(char str[],char substr[])
{
  printf("enter the first string");
  scanf("%s",str);
  printf("enter the second string");
  scanf("%s",substr);
}
int str_reverse(char str[],char substr[])
{
  int index = -1;
    for (int i = 0; str[i] != '\0'; i++) {
        index = -1;
        for (int j = 0; substr[j] != '\0'; j++) {
            if (str[i + j] != substr[j]) {
                index = -1;
                break;
            }
            index = i;
        }
        if (index != -1) {
            break;
        }
    }
  return index;
}
void output(char str[],char substr[],int index){
  printf("index of the string is %d\n",index);
}
int main(){
  char str[30],substr[30];
  input_string(str,substr);
  int index;
  index=str_reverse(str,substr);
  output(str,substr,index);
  return 0;
}
#include <stdio.h>
int input_number()
{
  int n;
  printf("Enter a number");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int i,sum=0;
  for(i=1;i<=n;i++)
    {
      if(n%i==0){
        sum++;
      }
    }
  return sum;
}
void output(int n, int sum){
  if(sum==2){
    printf("number is prime");    
  }
  else{
    printf("number is not prime");
  }
}
int main(){
  int n,sum;
  n=input_number();
  sum=is_prime(n);
  output(n,sum);
  return 0;
}

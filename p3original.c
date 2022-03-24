#include <stdio.h>
int input_number()
{
  int n;
  printf("enter a number");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int prime=0;
  for(int i=2;i<n;i++){
    if(n%i==0){
      prime=1;
    }
  }
  return prime;
}
void output(int n, int prime)
{
if(prime ==1){
  printf("its not a prime number");
  }
  else{
    printf("its a prime number");
    
  }
}
int main()
{
  int n,prime;
  n=input_number();
  prime=is_prime(n);
  output(n,prime);
  return 0;
  
}
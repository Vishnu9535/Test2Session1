#include <stdio.h>
int input()
{
  int n;
  printf("enter nth number of fibonacci series");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int fibo,n1=0,n2=1;
  for(int i=2;i<=n;i++){
  if(n!=1){
    fibo=n1+n2;
    n1=n2;
    n2=fibo;
  }
    }
 
  return fibo;
}
void output(int n, int fibo)
{
  if(n==1){
    printf("the fibanacci series is %d",n-1);
  }
  else{
  printf("the fibanacci series is %d",fibo);
    }
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
  
}


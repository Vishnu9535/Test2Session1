#include <stdio.h>
int input(){
  int n;
  printf("enter nth number to find fibonacci sequence");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n){
  int n1=0,n2=1,n3,i;
  for(i=2;i<n;i++)
  {
    n3=n1+n2;
    n1=n2;
    n2=n3;
  }
  return n3;
}
void output(int n, int n3){
  printf("%d is the fibonacci number",n3);
}
int main()
{ 
  int n,n3;
  n=input();
  n3=find_fibo(n);
  output(n,n3);
  return 0;
  }

  
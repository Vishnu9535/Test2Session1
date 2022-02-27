#include<stdio.h>
#include<math.h>
int input_array_size(){
  int n;
  printf("enter the number");
  scanf("%d",&n);
  return n;
}
void init_array(int n, int a[n])
{
  int i;
  for(i=2;i<=n;i++){
    a[i]=0;
    }
}
void erotosthenes_sieve(int n, int a[n])
{
  int k=2,y;
  y=sqrt(n);
  while(k<=y){ 
          for(int i = 2; n >= k*i; i++){
           a[k*i] = 1;
           }
          k++; 
      }
  }
  void out_put(int n, int a[n])
  {
    for(int i = 2; i <= n; i++) { 
          if(a[i] == 0) {
             printf("the numbers are %d\n",i);
          }
       }
  }
  int main()
{
  int n;
  n=input_array_size();
  int a[1000];
  erotosthenes_sieve(n,a);
  out_put(n,a);
  return 0;
  }
  
    
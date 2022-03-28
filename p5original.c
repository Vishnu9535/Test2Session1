#include <stdio.h>
int input_array_size()
{
  int n;
  printf("enter the array size");
  scanf("%d",&n);
  return n;
}
void init_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
  {
    a[i]=i+2;
  }
}
void erotosthenes_sieve(int n, int a[n])
{
  for(int j=0;j<n;j++)
  for(int i=2;i<a[j];i++)
  {
    if(a[j]%i==0)
    {
      a[j]=0;
    }
  }
}
void out_put(int n, int a[n])
{
for(int i=0;i<n;i++)
{
  printf("%d",a[i]);
}
}
int main()
{
  int n,a[100];
  n=input_array_size();
  init_array(n,a);
  erotosthenes_sieve(n,a);
  out_put(n,a);
  return 0;
  }

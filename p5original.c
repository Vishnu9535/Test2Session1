#include<stdio.h>
int input_array_size(){
  int n;
  printf("enter the number");
  scanf("%d",&n);
  return n;
}
void init_array(int n, int a[n]
{
  int a[n+1];
  for(i=2;n;i++){
    a[i]=i;
    }
}
void erotosthenes_sieve(int n, int a[n])
{
  for(int i = 2; i*i <= n; i++)
	{
		if(a[i] != -1)
		{
			for(int j = 2*i; j <=n ; j += i)
				prime[j] = -1;
		}
	}
}
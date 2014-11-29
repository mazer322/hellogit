
#include <stdio.h>
#define DYDIS 10

int asum (int [],int );

int main (void) {
  int ai[DYDIS]={1,2,3,4,5}; 
  printf ("%d elementu masyvo suma yra %d\n",sizeof ai/sizeof ai[0], asum(ai,sizeof ai / sizeof ai[0]));
  return 0;
}

int asum (int a[],int n) {
  int i,sum;
  for (i=0,sum=0; i<n ;i++) sum+=a[i];
  return sum;
}
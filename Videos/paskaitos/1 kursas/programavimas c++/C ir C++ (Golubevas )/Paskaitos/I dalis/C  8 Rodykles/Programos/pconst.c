#include <stdio.h>
int main (void)
{
int i=1, *pi=&i;
const int ci=2, *pci=&ci;

int const caca1, * const caca2;


int *pi1=&i;
int *pi2=&ci; //C - Suspicious, C++ - Error

const int * pci1=&ci;
const int * pci2=&i; //!

int * const cpi1=&i;
int * const cpi2=&ci; //C - Suspicious, C++ - Error

const int * const cpci1=&i;
const int * const cpci2=&ci;


pci=pi;
/* 
C - OK 
C++ - OK
*/

pi = pci; 
/* 
C - Warning: Suspicious pointer conversion
C++ - Error: Cannont convert 'const int *' to 'int *'
*/

/*
*pi1++;
*(pi1++);
(*pi1)++;

*pci1++;
*(pci1++);
(*pci1)++; //Error

*cpi1++;   //Error
*(cpi1++); //Error
(*cpi1)++;

*cpci1++;   //Error
*(cpci1++); //Error
(*cpci1)++; //Error
*/

return 0;
}
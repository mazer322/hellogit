
#include <iostream.h>
char ac[]="abc";
char * f1() {return ac;}
int main (void)
{
char * (*apfpc[10])();
apfpc=f1;
return 0;
}
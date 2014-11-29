
#include <stdio.h>
char ac[]="abc";
char * f1() {printf("%s",ac); return ac;}
int main (void)
{
char * (*apfpc[10])();
apfpc[0]=f1;
apfpc[0]();

return 0;
}
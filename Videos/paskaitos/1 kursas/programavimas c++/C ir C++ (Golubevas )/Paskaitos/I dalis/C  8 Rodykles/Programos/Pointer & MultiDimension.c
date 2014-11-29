
#include <iostream.h>
int main (void)
{
int ai[2][3];
int (*pi1)[3]=ai;
int (*pi2)[3]=&ai[1];
int *pi3=ai[1];
int *pi4=&ai[1][0];

cout << ai << endl;
cout << ai+1 << endl;

return 0;
}
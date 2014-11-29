#include <stdio.h>
int main (void)
{
struct Studentas {
     int metai, nr;
     int kursas;
     char  pavarde[20];
     char* vardas;
} fuksas = {2000, 1, 1, "Pavarde", "Vardas"};

struct Studentas nebefuksas=fuksas;

nebefuksas.kursas = 2;
nebefuksas.pavarde[5] = 'g';
*nebefuksas.vardas = 'V';     /* *(nebefuksas.vardas) = ’V’; */

printf("%d %s %s", nebefuksas.kursas,nebefuksas.pavarde,nebefuksas.vardas);

printf("%c", *nebefuksas.vardas + 3);
return 0;
}
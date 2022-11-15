#include <stdio.h>
int main()
{
    int no1 = 10, no2 = 20;
    printf ("1: %d", no1);
    printf ("\n2: %d", no1++);
    printf ("\n3: %d", no1);
    printf ("\n4: %d", ++no1);
    printf ("\n5: %d", no1);
    no1 = 10, no2 = 20;
    printf ("\n6: %d", no1+(++no2));
    printf ("\n7: %d", no1-(no2++));
    printf ("\n8: %d", ++no1+no2);
    printf ("\n9: %d", --no1+(++no2));
    printf ("\n10: %d", --no1+(++no2));
    no1 = 30, no2 = 40;
    printf ("\n11: %d", no1+no2==2);
    printf ("\n12: %d", no1!=no2);
    printf ("\n13: %d", no1>no2);
}
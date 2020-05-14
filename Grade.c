#include <stdio.h>
#include <stdlib.h>
int main()
{
    int gr;
    printf("Enter Marks Of The Student \n");
    scanf("%d",&gr);
    if(gr<=100 && gr>=85)
    {
        printf(" The Student has got GRADE A\n");
    }
    else if(gr<=84 && gr>=70)
    {
        printf(" The Student has got GRADE B\n");
    }
    else if(gr<=69 && gr>=55)
    {
        printf(" The Student has got GRADE C\n");
    }
    else if(gr<=54 && gr>=40)
    {
        printf(" The Student has got GRADE D\n");
    }
    else if(gr<40)
    {
        printf(" The Student has got GRADE F\n");
    }
    return 0;
}

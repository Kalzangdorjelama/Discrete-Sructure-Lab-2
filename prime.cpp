//WAP to find the prime factor of a number.

#include <stdio.h>

int main()
{
    int i, j, a, P;

    printf("Enter any number : ");
    scanf("%d", &a);

    printf(" Prime Factors of %d are: \n", a);

    for(i=2; i<=a; i++)
    {
        if(a%i==0)
        {
            P = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    P = 0;
                    break;
                }
            }

            if(P==1)
            {
                printf("%d, ", i);
            }
        }
    }

    return 0;
}
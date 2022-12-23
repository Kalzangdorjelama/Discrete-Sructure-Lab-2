//WAP program to implement binary integer addition, multiplication, and division.

#include <stdio.h>

int biAddition(int a, int b)
{
    int c; 
    while (b != 0) 
	{
        c = (a & b) << 1;
        a = a ^ b;
        b = c;
    }
    return a;
}
int biSubtracton(int a, int b)
{
    int carry;
    b = biAddition(~b, 1);

    while (b != 0)
	{
        carry = (a & b) << 1;
        a = a ^ b;
        b = carry;
    }
    return a;
}
int biMultiplication(int a, int b) 
{
        int i, res = 0;
        for (i = 0; i < b; i++)
		{
                res = biAddition(res, a);
        }
        return res;
  }
int biDivision(int a, int b) 
  {
        int i, res, count = 0, twosComplement;
        if (a < b)
		{
                printf("Division of %d and %d is %d\n", a, b, 0);
                return 0;
		}
	res = a;
        twosComplement = biAddition(~b, 1);
        for (i = 0; res > 0; i++)
		{
                res = biAddition(res, twosComplement);
                if (res <= 0) 
				{
                        if (res == 0)
                                count = biAddition(count, 1);
                        break;
                } else 
				{
                        count = biAddition(count, 1);
                }
        }
        return count;
  }
		

int main()
{
    int x, y, biAdd, biSub, biMul, biDiv;

    printf("Enter first integer : ");
    scanf("%d", &x);

    printf("Enter second integer : ");
    scanf("%d", &y);

    biAdd = biAddition(x, y);
    biSub = biSubtracton(x, y);
    biMul = biMultiplication(x, y);
    biDiv = biDivision(x, y);

    printf("Binary Addition: %d\n", biAdd);
    printf("Binary Subtraction: %d\n", biSub);
    printf("Binary Multiplication: %d\n", biMul);
	printf("Binary Division: %d\n", biDiv);
    return 0;
}
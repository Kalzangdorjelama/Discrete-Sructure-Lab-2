//Write a program to find and implement the Chinese Remainder Theorem.

#include<stdio.h>
#include<stdlib.h>
long long int modularMultiplicativeInverse_BruteForce(long long int e,long long int mod)
{
    long long int i;
    for(i=1;i<mod;i++)
        if((e*i)%mod==1)
            return i;
}
int main()
{
    long long int i,n,*a,*b,*m,M,*Marray,answer;
    printf("Enter the number of Equations : \n");
    scanf("%lld",&n);
    a=(long long int*)malloc(sizeof(long long int)*n);
    m=(long long int*)malloc(sizeof(long long int)*n);
    Marray=(long long int*)malloc(sizeof(long long int)*n);
    printf("Enter the array a :\n");
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    printf("Enter the array m (all the elements of m should be pairwise co-prime) :\n");
    for(i=0;i<n;i++)
        scanf("%lld",&m[i]);
    M=1;
    for(i=0;i<n;i++)
        M*=m[i];
    for(i=0;i<n;i++)
        Marray[i]=M/m[i];
    answer=0;
    for(i=0;i<n;i++)
        answer = (answer + ((a[i] * Marray[i])%M * modularMultiplicativeInverse_BruteForce(Marray[i],m[i]))%M)%M;
    printf("x = %lld\n",answer);
    return 0;
}
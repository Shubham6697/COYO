#include<stdio.h>
#include<math.h>
int prime(long int n);
int main()
{
    long int n;
    scanf("%ld",&n);
    if(prime(n)==1)
        printf("prime");
    else
        printf("not prime");
    return 0;
}
int prime(long int n)
{
    if(n==1)
        return 0;
    else if(n==2 || n==3 || n==5 || n==7 || n==11 || n==13)
        return 1;
    else
    for(int i=2;i<sqrt(n)+1;i++)
    {
        if (n%i==0)
            return 0;
    }
    return 1;
}

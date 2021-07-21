#include<stdio.h>
int main()
{
    long int n;
    int a[100],count=0;
    scanf("%ld",&n);
    while(n!=0)
    {
        a[count]=n%2;
        count++;
        n/=2;
    }
    for(int i=count-1;i>=0;i--)
        printf("%d",a[i]);
    return 0;

}


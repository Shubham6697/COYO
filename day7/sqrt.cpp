#include<stdio.h>
using namespace std;

float sqrt(int n)
{
    int left=1,right=n,mid=(left+right)/2,result;
    while(left<=right)
    {
        if(mid*mid==n)
        {
            result= mid;
            break;
        }
        else if(mid*mid<n)
        {
            if((mid+1)*(mid+1)>n)
            {
                result=mid;
                break;
            }
            else
                left=mid+1;
        }
        else
        {
            right=mid-1;
            if((mid-1)*(mid-1)<n)
            {
                result=mid-1;
                break;
            }
        }
    }


}


float precision(int num)
{
    float p=0.1;
    int num1=num+1;

}

int main()
{
    int num;
    cin>>num;
    cout<<sqrt(num);
    return 0;
}

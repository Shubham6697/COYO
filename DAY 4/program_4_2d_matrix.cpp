#include<bits/stdc++.h>
using namespace std;
int main()
{
   int *p,row=5,col=10;
   int *poi=(int*)malloc(row*col*sizeof(int));      //allocate memory dynamically size of 5*10
   p = poi;
   while(p<poi+50)
   {
       cin>> *p;
        p +=1;
   }
   p = poi;
   while(p<poi+50)
   {
       cout<< *p<<"   ";
        if((p-poi)%row==row-1)
        cout<<endl;
        p +=1;
   }
    return 0;
}

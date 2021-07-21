#include<bits/stdc++.h>
using namespace std;
int main()
{
   int *p,row=5,col=10;
   int *poi=(int*)malloc(row*col*sizeof(int));      //allocate memory dynamically size of row*col
   p = poi;
   while(p<poi+row*col)
   {
       cin>> *p;        //taking input
        p +=1;              //increase pointer
   }
   p = poi;
   while(p<poi+row*col)
   {
       cout<< *p<<"   ";            //printing element of matrix
        if((p-poi)%row==row-1)          //for new line check whether it is last element or not
        cout<<endl;
        p +=1;                      //increasing pointer
   }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int stepPerms(int n) {
    if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else if(n==3)
        return 4;
    return stepPerms(n-1)+stepPerms(n-2)+stepPerms(n-3);

}

int main()
{
    int n;
        cin >> n;
        cout<<stepPerms(n);

    return 0;
}

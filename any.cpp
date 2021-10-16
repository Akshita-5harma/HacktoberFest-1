#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,i=0;
    cin>>a>>b>>c;

    while (a + b = c)
    {
        a = c*a;
        b = c*b;
        c = c*c;
        i++;
    }
    cout<<" "<<i;
    return 0;
}

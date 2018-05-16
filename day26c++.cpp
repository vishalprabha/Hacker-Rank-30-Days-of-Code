#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int da, dc, ma, mc, ya, yc;
    cin>>da>>ma>>ya;
    cin>>dc>>mc>>yc;
    if(da<=dc && ma<=mc && ya<=yc)
        cout<<0;
    else if(ma==mc && ya==yc)
    {
        if(da>dc)
        cout<<15*(da-dc);
        else cout<<0;
    }
    else if(ya==yc)
    {
        if(ma>mc)
         cout<<500*(ma-mc);
        else
            cout<<0;
    }
    else if(ya>yc)
        cout<<10000;
    else cout<<0;
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m, flag;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        flag = 0;
        cin>>m;
        if(m==1)
        {
            cout<<"Not prime\n";
            continue;
        }

        for(int i = 2; i*i <= m; i++ )
        {
            if(m%i==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0) cout<<"Prime\n";
        else cout<<"Not prime\n";
    }
    return 0;
}

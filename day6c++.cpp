#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, count1=0, count2=0;
    char s[10240], s1[10240], s2[10240];
    cin>>n;
    for( int i = 0; i < n; i++)
    {
        count1=count2=0;
        memset(s1, 0, sizeof s1);
        memset(s2, 0, sizeof s2);
        cin>>s;
        for( int j = 0; s[j]!= '\0'; j++)
        {
            if(j%2)
                s1[count1++]=s[j];
            else s2[count2++]=s[j];
        }
        cout<<s2<<" "<<s1<<endl;
    }
    return 0;
}

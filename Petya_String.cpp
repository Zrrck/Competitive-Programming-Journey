// Problem link

//https://codeforces.com/problemset/problem/112/A
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2;
    
    
    cin >> s1 >> s2;
    
    for(int i=0; i < s1.size(); i++)
        
    {
        
        if(s1[i] > 91)
        {
            s1[i] -= 32;
        }
        if(s2[i] > 91)
        {
            s2[i] -= 32;
        }
    }
    
    if(s1 == s2)
    {
        cout << "0";
    }
    
    else if (s1 < s2)
    {
        cout << "-1";
        
    }
    else
    {
        cout << "1";
    }
}


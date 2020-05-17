// Codeforces problem link
//https://codeforces.com/problemset/problem/339/A
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s1,s2;
    vector<string> Solition;
    int j=0;
    
    cin >> s1;
    
    for(int i=0; i < s1.size();i++ )
    {
        if(s1[i] != '+')
        {
            s2 = s1[i];
            Solition.push_back(s2);
            
        }
        
    }
    
    sort(Solition.begin(),Solition.end());
    cout << Solition[0];
    for(int k=1; k < Solition.size();k++ )
    {
        cout << "+"<< Solition[k] ;
    }
    
}



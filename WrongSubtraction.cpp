//Problem 1
 
// https://codeforces.com/problemset/problem/977/A


#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> k >> n ;
    
    while(n--)
    {
        if ( k % 10 == 0)
        {
            k /= 10;
            
        }
        else
        {
            k--;
        }
        
    }
    cout << k ;
}


// Problem 2

// 1030A

#include <iostream>

using namespace std;

int main()
{
    int n,k;
    bool test = false;
    string result;
    cin >> n;
    
    for(int i = 1 ; i <= n ; i++)
    {   cin >>  k ;
        
        
        if (k > 0)
        {
            test = true;
        }
        
    }
    result = test ? "HARD" : "EASY";
    cout << result ;
}




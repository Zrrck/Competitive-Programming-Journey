//COdeforces problem link

//https://codeforces.com/problemset/problem/281/A


#include <iostream>

using namespace std;

int main()
{
    string s1;
    
    cin >> s1;
    if(s1[0] > 91)
    {
        s1[0] = s1[0]-32;
    }
    cout << s1;
}


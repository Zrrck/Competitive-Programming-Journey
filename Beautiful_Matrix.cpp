//Codeforces problem link

//https://codeforces.com/problemset/problem/263/A
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int s[5][5],oneRow,oneColum;
    for(int i=0 ; i<5 ; i++)
    {
        for(int j=0 ; j <5 ; j++)
        {
            cin >> s[i][j];
            if(s[i][j] == 1)
            {
                oneRow = i+1;
                oneColum = j+1;
            }
            
            
        }
        
    }
    
    cout << abs((abs((3-oneColum)) + abs((3-oneRow))))<< endl;
    
    
}



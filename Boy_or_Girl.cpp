
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;


int main()
{
    
    int count =0,sSize;
    
    char s1[101];
    
    
    cin >> s1;
    sSize = strlen(s1);
    sort(s1,s1+sSize);
    
    for(int i=0 ; i < sSize; i++)
    {
        
        if(s1[i] != s1[i+1])
        {
            count++;
        }
    }
    
    
    if(count %2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
        cout << "IGNORE HIM!";
    
    
    
}

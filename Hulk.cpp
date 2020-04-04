
//705A

#include <iostream>

using namespace std;

int main()
{
    string e = "I love ";
    string o = "I hate ";
    int n;
    
    cin >> n;
    
    for (int i = 1 ; i <=n ; i++)
    {
        if (i == 1)
        {
            cout << "I hate ";
        }
        else if (i%2 == 0 && i != 1)
        {
            cout << "that "<< e ;
        }
        else
        {
            cout << "that "<< o ;
        }
        
        
    }
    cout << "it";
}




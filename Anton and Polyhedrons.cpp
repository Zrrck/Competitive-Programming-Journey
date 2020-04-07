#include <iostream>
#include <map>

using namespace std;

int main() {
    
    map<string, int> faces;
    faces["Tetrahedron"]  = 4;
    faces["Cube"]         = 6;
    faces["Octahedron"]   = 8;
    faces["Dodecahedron"] = 12;
    faces["Icosahedron"]  = 20;
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        sum += faces[s];
    }
    cout << sum << endl;
    return 0;
}

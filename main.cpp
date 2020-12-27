#include <iostream>
#include <map>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    map<string, string> s;
    string x, y, z;
    int N;
    cout<< "The count of strings:"; cin >> N;
    for (int i = 0; i < N; i++) {
        cout << "x[" << i << "]:";  cin >> x;
        cout << "y[" << i << "]:";  cin >> y;
        s[x] = y;
        s[y] = x;
    }
    cout << "z="; cin >> z;
    cout << "result:" << s[z];
}

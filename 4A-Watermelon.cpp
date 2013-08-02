#include <iostream>
using namespace std;

int main(){
    int w = 0; cin >> w;
    string output = (w <= 2 || w % 2) ? "NO" : "YES";
    cout << output << endl;
    return 0;
}

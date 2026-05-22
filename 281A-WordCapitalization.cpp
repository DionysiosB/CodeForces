#include <iostream>
using namespace std;

int main(){
    string line; getline(cin, line);
    line[0] = toupper(line[0]);
    cout << line << endl;
    return 0;
}

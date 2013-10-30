#include <iostream>
using namespace std;

int main(){
    string first, second; 
    getline(cin, first); getline(cin, second);
    for(int k = 0; k < first.size(); k++){cout << ((first[k] - '0')^(second[k] - '0'));};  cout << endl;
    return 0;
}

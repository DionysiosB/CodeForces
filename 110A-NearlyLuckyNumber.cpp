#include <iostream>
using namespace std;

int main(){
    string number; getline(cin, number);
    int output = 0;
    for(int k = 0; k < number.size(); ++k){if(number[k] =='4' || number[k] =='7'){++output;}}
    cout << ((output == 4 || output == 7) ? "YES" : "NO") << endl;
    return 0;
}

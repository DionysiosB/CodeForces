#include <iostream>
using namespace std;

int main(){
    const int threshold = 10;
    int numWords; cin >> numWords;
    do{ string input; cin >> input;
        int inputSize = input.size();
        if(inputSize <= threshold){cout << input << endl;}
        else{cout << input[0] << inputSize - 2 << input[inputSize - 1] << endl;}
    }while(--numWords);
    
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    string first = "", second = "";
    getline(cin, first); getline(cin, second);
    string output = "YES";
    const size_t length = first.size();
    if(length == second.size()){
        for(int k = 0; k < length; k++){if(first[k] != second[length - 1 - k]){output = "NO"; break;}}
    }
    else{output = "NO";}
    cout << output << endl; 
    return 0;
}

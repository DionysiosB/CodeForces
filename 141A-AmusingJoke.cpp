#include <iostream>
using namespace std;

int main(){
    const int alphaLength = 26; char first[alphaLength]={0}, second[alphaLength] = {0}; 
    string line;
    getline(cin, line); for(int k = 0; k < line.size(); k++){first[line[k] - 'A']++;}
    getline(cin, line); for(int k = 0; k < line.size(); k++){first[line[k] - 'A']++;}
    getline(cin, line); for(int k = 0; k < line.size(); k++){second[line[k] - 'A']++;}
    string output = "YES";
    for(int k = 0; k < alphaLength; k++){if(first[k] != second[k]){output = "NO"; break;}}
    cout << output << endl;
    return 0;
}

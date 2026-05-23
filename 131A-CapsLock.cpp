#include <iostream>
using namespace std;

string changeCase(string s){
    for(int k = 0; k < s.size(); ++k){s[k] = (islower(s[k]) ? toupper(s[k]) : tolower(s[k]));}
    return s;
}


int main(){
    string word; getline(cin, word);
    bool accidental = 1;
    unsigned int index = 0;
    while(++index <= word.size()){if(islower(word[index])){accidental = 0; break;}}
    cout << (accidental ? changeCase(word) : word ) << endl;
    return 0;
}

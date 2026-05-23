#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string word; getline(cin, word);
    int lowerCase = 0;
    for(int k = 0; k < word.size(); k++){if(islower(word[k])){lowerCase++;}}
    int (*conversionFunction)(int);
    if(lowerCase >= 1.0 * word.size() / 2){conversionFunction = tolower;}
    else{conversionFunction = toupper;}
    for(int k = 0; k < word.size(); k++){word[k] = conversionFunction(word[k]);}
    cout << word << endl;
    return 0;
}

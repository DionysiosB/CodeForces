#include <iostream>
using namespace std;

int main(){
    string first;  getline(cin, first);
    string second; getline(cin, second);
    int comparison = 0;
    for(int k = 0; k < first.size() ; ++k){
        if(tolower(first[k]) < tolower(second[k])){comparison = -1;break;}
        if(tolower(first[k]) > tolower(second[k])){comparison =  1;break;}
    }
    printf("%d\n",comparison);
    return 0;
}

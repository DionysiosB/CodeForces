#include <iostream>
using namespace std;

int main(){
    string stones; getline(cin, stones);
    string moves; getline(cin, moves);
    int output = 0;
    for(int k = 0; k < moves.size(); k++){if(moves[k] == stones[output]){output++;}}
    cout << 1 + output << endl;
    return 0;
}

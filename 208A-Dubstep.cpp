#include <iostream>
using namespace std;

int main(){
    string line; getline(cin, line);
    string output = "";
    int index = 0;
    bool separator = 1;
    while(index + 2 < line.size()){
        if(line.substr(index, 3) == "WUB"){index += 3; if(!separator){output += ' ';}; separator = 1;}
        else{output += line[index]; index++; separator = 0;}
    }
    if(line.size() > 1 && index == line.size() - 2){output += line.substr(index, 2);}
    else if(line.size() > 0 && index == line.size() - 1){output += line[index];}
    cout << output << endl;
    return 0;
}

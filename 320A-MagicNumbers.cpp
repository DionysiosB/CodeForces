#include <iostream>
using namespace std;

int main(){
    string line; getline(cin, line);
    string output = "YES";
    long index = 0; const long length = line.size();
    while(index < length){
        if(line[index] != '1'){output = "NO";break;}
        else {
            if(index < length - 2 && line[index + 1] == '4' && line[index + 2] == '4'){index += 3;}
            else if(index < length - 1 && line[index + 1] == '4'){index += 2;}
            else {index++;}
        }
    }
    cout << output << endl;
}

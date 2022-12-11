#include <iostream>
using namespace std;

int main(){
    const int dangerous = 7;
    string line; getline(cin, line);
    int state = -1; int runningSum = 0; string output = "NO";
    for(int k = 0; k < line.size(); k++){
        if(line[k] != state){state = line[k]; runningSum = 0;}
        ++runningSum; 
        if(runningSum >= dangerous){output = "YES"; break;}
    }
    cout << output << endl;
}

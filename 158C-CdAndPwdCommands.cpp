#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

class directory{
private:
    vector<string> path;
public:
    void pwd(){
        cout << "/";
        for(int k = 0; k < path.size(); k++){cout << path[k] << "/";}
        cout << endl;
    }

    void pop(){path.pop_back();}
    void add(string newDir){
        if(newDir == ".."){path.pop_back();}
        else{path.push_back(newDir);}
    }
    void root(){path.clear();}
};


int main(){
    int numCommands; scanf("%d\n", &numCommands);
    directory dir;
    string command;
    while(numCommands--){
        getline(cin, command);
        if(command == "pwd"){dir.pwd();}
        else if (command[0] == 'c' && command[1] == 'd'){
            char c; int index = 3; string newFolder = "";
            if(command[index] == '/'){index++; dir.root();}
            while(index < command.size()){
                c = command[index++];
                if(c != '/'){newFolder += c;}
                else{dir.add(newFolder);newFolder = "";}
            }
            if(newFolder != ""){dir.add(newFolder);}
        }
    }
    
    return 0;
}

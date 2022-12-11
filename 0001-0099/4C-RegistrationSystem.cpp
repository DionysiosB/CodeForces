#include <cstdio>
#include <iostream>
#include <map>

int main(){
    
    int n; scanf("%d\n", &n);
    std::map<std::string,long> database;
    std::string name("");

    while(n--){
        getline(std::cin, name);
        if(database.find(name) == database.end()){puts("OK");database[name] = 1;}
        else{std::cout << name << database[name] << std::endl; ++database[name];}
    }

    return 0;
}

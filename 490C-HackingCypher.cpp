#include <cstdio>
#include <iostream>
#include <string>
#include <set>

int main(){

    std::string key; getline(std::cin, key);
    long long a, b; std::cin >> a >> b;
    std::set<long long> aDiv;

    long long current = 0;
    for(long long p = 0; p < key.size(); p++){
        current = (10 * current + (key[p] - '0')) % a;
        if(current == 0){aDiv.insert(p);}
    }

    long long mult = 1;
    long sep = -1;
    current = 0;
    for(long long p = key.size() - 1; p >= 0 ; p--){
        current = (current + mult * (key[p] - '0')) % b;
        mult = (10 * mult) % b;
        if(key[p] != '0' && current == 0 && aDiv.find(p - 1) != aDiv.end()){sep = p;}
    }

    if(sep < 0){puts("NO");}
    else{std::cout << "YES\n" << key.substr(0, sep) << std::endl << key.substr(sep) << std::endl;}

    return 0;
}

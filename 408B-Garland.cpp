#include <cstdio>
#include <iostream>

int main(){

    const int N = 26;

    int available[N] = {0};
    int recipe[N] = {0};

    std::string sheets(""), garland("");

    getline(std::cin, sheets);
    for(int k = 0; k < sheets.size(); k++){++available[sheets[k] - 'a'];}

    getline(std::cin, garland);
    for(int k = 0; k < garland.size(); k++){++recipe[garland[k] - 'a'];}
    //for(int k = 0; k < N; k++){printf("%c -> %d | %d\n", 'a' + k, available[k], recipe[k]);}

    bool possible(1);
    long total(0); 

    for(int k = 0; k < N; k++){
        if(recipe[k] > 0 && available[k] == 0){possible = 0; break;}
        else if(recipe[k] <= available[k]){total += recipe[k];}
        else {total += available[k];}
    }

    printf("%ld\n", possible ? total : -1);

    return 0;
}

#include <cstdio>
#include <cstdio>
#include <vector>
#include <iostream>

int main(){

    const int N = 8;
    std::string pokemons[] = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};

    int n; scanf("%d\n", &n);
    std::string hidden; std::cin >> hidden;


    std::string output = "";
    for(int p = 0; p < N; p++){
        std::string current = pokemons[p];
        if(current.size() != n){continue;}

        bool possible = 1;
        for(int q = 0; q < n; q++){
            if(hidden[q] != '.' && hidden[q] != current[q]){possible = 0; break;}
        }

        if(possible){output = current; break;}
    }

    std::cout << output << std::endl;


    return 0;
}

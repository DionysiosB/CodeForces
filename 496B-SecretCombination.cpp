#include <cstdio>
#include <iostream>
#include <string>

int main(){

    int n; scanf("%d\n", &n);
    std::string comb; std::cin >> comb;
    comb += comb;

    std::string best = comb.substr(0,n);

    for(int p = 0; p < 10; p++){
        for(int d = 0; d < comb.size(); d++){++comb[d]; if(comb[d] > '9'){comb[d] = '0';}}
        for(int s = 0; s < n; s++){
            std::string current = comb.substr(s, n);
            if(current.compare(best) < 0){best = current;}
        }
    }

    std::cout << best << std::endl;

    return 0;
}

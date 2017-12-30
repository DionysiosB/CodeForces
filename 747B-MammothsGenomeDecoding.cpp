#include <iostream>
#include <vector>

int main(){

    size_t n; std::cin >> n;
    std::string dna; std::cin >> dna;
    long a(0), c(0), g(0), t(0);
    long target = n / 4;
    bool possible(true);

    if(n % 4 > 0){possible = 0;}
    else{
        for(size_t p = 0; p < dna.size(); p++){
            if(dna[p] == 'A'){++a;}
            else if(dna[p] == 'C'){++c;}
            else if(dna[p] == 'G'){++g;}
            else if(dna[p] == 'T'){++t;}
        }
    }


    if(a > target || c > target || g > target || t > target){possible = false;}

    if(possible){
        std::vector<char> v;
        a = target - a; c = target - c; g = target - g; t = target - t;
        while(a--){v.push_back('A');}
        while(c--){v.push_back('C');}
        while(g--){v.push_back('G');}
        while(t--){v.push_back('T');}

        size_t ind(0);
        for(int p = 0; p < dna.size(); p++){
            if(dna[p] != '?'){continue;}
            dna[p] = v[ind++];
        }
    }

    std::cout << (possible ? dna : "===") << std::endl;

    return 0;
}

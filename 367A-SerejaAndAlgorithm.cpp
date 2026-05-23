#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


int main(){

    std::string input; getline(std::cin, input);
    std::vector<std::vector<long> > counts(1 + input.size(), std::vector<long>(3,0));
    for(long p = 1; p <= input.size(); p++){
        for(long q = 0; q < 3; q++){counts[p][q] = counts[p - 1][q] + (input[p - 1] == 'x' + q);}
    }

    long m(0); scanf("%ld", &m);
    while(m--){
        long start(0), end(0); scanf("%ld %ld", &start, &end);
        std::vector<long> dist(3);
        for(int q = 0; q < 3; q++){dist[q] = counts[end][q] - counts[start - 1][q];}
        sort(dist.begin(), dist.end());
        //std::cout << input.substr(start - 1, end - start + 1) << "\t";

        if(end - start + 1 < 3 || dist[2] - dist[0] <= 1){puts("YES");} else{puts("NO");}
    }
    return 0;
}

#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    int L = 26;

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::string s; getline(std::cin, s);
    std::vector<std::vector<long> > letters(L);

    for(long p = 0; p < s.size(); p++){letters[s[p] - 'a'].push_back(p);}

    while(m--){
        char x, y; std::cin >> x >> y;
        std::vector<long> temp = letters[x - 'a'];
        letters[x - 'a'] = letters[y - 'a'];
        letters[y - 'a'] = temp;
    }

    for(long p = 0; p < letters.size(); p++){
        char c = 'a' + p;
        for(long q = 0; q < letters[p].size(); q++){
            long pos = letters[p][q];
            s[pos] = c;
        }
    }

    std::cout << s << std::endl;

    return 0;
}

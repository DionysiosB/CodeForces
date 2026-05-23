#include <cstdio>
#include <iostream>
#include <vector>
#include <map>

int main(){

    int L = 26;

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::string s; getline(std::cin, s);

    std::map<int, int> rebrand;
    for(long p = 0; p < L; p++){rebrand.insert(std::pair<int, int>(p, p));}

    std::vector<std::vector<long> > letters(L);
    for(long p = 0; p < s.size(); p++){letters[s[p] - 'a'].push_back(p);}

    while(m--){
        char x, y; std::cin >> x >> y;
        int t = rebrand[x - 'a']; rebrand[x - 'a'] = rebrand[y - 'a']; rebrand[y - 'a'] = t;
    }

    for(long p = 0; p < L; p++){
        int source = rebrand[p];
        for(long q = 0; q < letters[source].size(); q++){
            long pos = letters[source][q];
            s[pos] = 'a' + p;
        }
    }

    std::cout << s << std::endl;

    return 0;
}

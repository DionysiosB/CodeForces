#include <cstdio>
#include <iostream>
#include <vector>
#include <set>

int main(){

    const long N = 1000000007;

    int n(0), m(0); scanf("%d %d\n", &n, &m);

    std::vector<std::set<char>> letterSet;
    for(int k = 0; k < m; k++){std::set<char> temp; letterSet.push_back(temp);}

    std::string temp;
    for(int name = 0; name < n; name++){
        getline(std::cin, temp);
        for(int p = 0; p < m; p++){letterSet[p].insert(temp[p]);}
    }

    
    long long output(1);
    for(int p = 0; p < m; p++){output *= letterSet[p].size(); output %= N;}
    printf("%lld\n", output);

    return 0;
}

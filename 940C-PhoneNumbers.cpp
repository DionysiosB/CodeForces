#include <iostream>
#include <set>

int main(){

    long n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;

    std::set<char> g;
    std::string t("");

    for(long p = 0; p < n; p++){
        g.insert(s[p]);
        if(p < k){t += s[p];}
    }

    while(t.size() < k){t += *g.begin();}

    for(long p = k - 1; p >= 0 && k <= n; p--){
        if(s[p] == *g.rbegin()){continue;}
        char x = s[p];
        while(!g.count(++x));
        t[p] = x; for(long u = p + 1; u < k; u++){t[u] = *g.begin();}
        break;
    }

    std::cout << t << std::endl;

    return 0;
}

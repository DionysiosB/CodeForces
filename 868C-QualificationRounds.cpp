#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::set<long> s;
    for(long p = 0; p < n; p++){
        long x(0);
        for(long q = 0; q < k; q++){long b; scanf("%ld", &b); x = 2 * x + b;}
        s.insert(x);
    }

    std::vector<long> v;
    for(std::set<long>::iterator it = s.begin(); it != s.end(); it++){v.push_back(*it);}

    bool possible(*s.begin() == 0);
    for(long p = 0; p < v.size(); p++){
        if(possible){break;}
        for(long q = p + 1; q < v.size(); q++){
            if((v[p] & v[q]) == 0){possible = true; break;}
        }
    }

    puts(possible ? "YES" : "NO");

    return 0;
}

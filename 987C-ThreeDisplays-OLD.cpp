//This solution only works when we can pick any three displays with different font size
#include <cstdio>
#include <iostream>
#include <vector>
#include <map>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> s(n), c(n);
    for(long p = 0; p < n; p++){scanf("%ld", &s[p]);}
    for(long p = 0; p < n; p++){scanf("%ld", &c[p]);}

    std::map<long, long> m;
    for(long p = 0; p < n; p++){
        if(m.count(s[p])){m[s[p]] = (m[s[p]] < c[p]) ? m[s[p]] : c[p];}
        else{m[s[p]] = c[p];}
    }

    std::vector<long> v;
    for(std::map<long, long>::iterator it = m.begin(); it != m.end(); it++){v.push_back(it->second);}
    sort(v.begin(), v.end());

    if(v.size() < 3){puts("-1");}
    else{printf("%ld\n", v[0] + v[1] + v[2]);}

    return 0;
}

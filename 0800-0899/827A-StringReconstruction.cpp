#include <iostream>
#include <vector>
#include <map>

int main(){

    long n; scanf("%ld", &n);
    std::map<std::string, std::vector<long> > m;
    long length(0);
    for(long p = 0; p < n; p++){
        std::string t; long k; std::cin >> t >> k;
        std::vector<long> pos;
        if(m.count(t) > 0){pos = m[t];}
        for(long q = 0; q < k; q++){
            long x; scanf("%ld", &x); --x;
            pos.push_back(x);
            long last = x + t.size();
            length = (length > last) ? length : last;
        }
        m[t] = pos;
    }

    std::string s(""); for(long p = 0; p < length; p++){s += 'a';}
    for(std::map<std::string, std::vector<long> >::iterator mapIter = m.begin(); mapIter != m.end(); mapIter++){
        std::string t = mapIter->first;
        std::vector<long> u = mapIter->second;
        for(long p = 0; p < u.size(); p++){for(long q = 0; q < t.size(); q++){s[u[p] + q] = t[q];}}
    }

    std::cout << s << std::endl;

    return 0;
}

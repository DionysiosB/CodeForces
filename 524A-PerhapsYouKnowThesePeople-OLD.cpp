#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>

int main(){

    long m, k; scanf("%ld %ld", &m, &k);
    double r = 1.0 * k / 100.0;

    std::map<long, std::vector<long> > g;
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    std::map<long, std::vector<long> > prop;
    std::vector<long> tmp;
    for(std::map<long, std::vector<long> >::iterator it = g.begin(); it != g.end(); it++){
        prop[it->first] = tmp;  //Initialize an empty vector
        sort(it->second.begin(), it->second.end());
    }

    for(std::map<long, std::vector<long> >::iterator ita = g.begin(); ita != g.end(); ita++){
        long a = ita->first;
        std::vector<long> va = ita->second;
        for(std::map<long, std::vector<long> >::iterator itb = g.begin(); itb != g.end(); itb++){
            long b = itb->first;
            std::vector<long> vb = itb->second;
            if(a == b ){continue;}
            if(std::find(va.begin(), va.end(), b) != va.end()){continue;}
            if(std::find(vb.begin(), vb.end(), a) != vb.end()){continue;}

            std::vector<long> common(va.size());
            std::vector<long>::iterator cit = std::set_intersection(va.begin(), va.end(), vb.begin(), vb.end(), common.begin());
            common.resize(cit - common.begin());
            if(common.size() >= r * va.size()){prop[a].push_back(b);}
        }
    }

    for(std::map<long, std::vector<long> >::iterator it = prop.begin(); it != prop.end(); it++){
        long person = it->first;
        std::vector<long> pfs = it->second;
        printf("%ld: %ld", person, pfs.size());
        for(std::vector<long>::iterator sit = pfs.begin(); sit != pfs.end(); sit++){printf(" %ld", *sit);}
        puts("");
    }

    return 0;
}

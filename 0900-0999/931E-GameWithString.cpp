#include <iostream>
#include <vector>
#include <map>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;
    std::map<char, std::vector<long> > m;
    for(long p = 0; p < s.size(); p++){m[s[p]].push_back(p);}

    double total(0.0);
    for(std::map<char, std::vector<long> >::iterator it = m.begin(); it != m.end(); it++){
        char ch = it->first;
        std::vector<long> v = it->second;

        long mxu(0);
        for(long p = 1; p < s.size(); p++){
            long unique(0);
            std::map<char, long> sm;
            for(long u = 0; u < v.size(); u++){
                char tc = s[(v[u] + p) % s.size()];
                ++sm[tc];
                if(sm[tc] == 1){++unique;}
                else if(sm[tc] == 2){--unique;}
            }
            mxu = (mxu > unique) ? mxu : unique;
        }

        total += 1.0 * mxu / s.size();
    }

    printf("%.8lf\n", total);

    return 0;
}

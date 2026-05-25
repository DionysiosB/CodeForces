#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main(){

    const long B = 26;

    std::string s; std::cin >> s;
    std::vector<std::set<long> > v(B);
    for(long p = 0; p < s.size(); p++){v[s[p] - 'a'].insert(p);}

    long q; std::cin >> q;
    while(q--){
        long w; std::cin >> w;
        if(w == 1){
            long pos; char c; std::cin >> pos >> c;
            --pos;
            v[s[pos] - 'a'].erase(pos);
            s[pos] = c;
            v[s[pos] - 'a'].insert(pos);
        }
        else if(w == 2){
            long left, right; std::cin >> left >> right;
            --left; --right;
            long cnt(0);
            for(long p = 0; p < B; p++){
                std::set<long>::iterator ita = v[p].lower_bound(left);
                std::set<long>::iterator itb = v[p].upper_bound(right);
                cnt += (ita != itb);
            }
            std::cout << cnt << std::endl;
        }
    }

    return 0;
}

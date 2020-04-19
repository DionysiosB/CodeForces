#include <iostream>
#include <vector>
#include <set>
#include <map>

int main(){
    
    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        std::vector<bool> done(n, false);
        long chg(0);

        for(long p = 0; p < s.size(); p++){
            if(done[p]){continue;}
            std::vector<long> process;
            std::set<long> group;
            std::map<char, long> tally;
            process.push_back(p); 
            while(process.size()){
                long pos = process.back(); process.pop_back();
                if(done[pos]){continue;}
                group.insert(pos); ++tally[s[pos]]; done[pos] = true;
                for(long u = pos % k; u < n; u += k){
                    if(!done[u]){process.push_back(u);}
                    if(!done[n - 1 - u]){process.push_back(n - 1 - u);}
                }
            }

            long mx(0);
            for(std::set<long>::iterator it = group.begin(); it != group.end(); it++){done[*it] = true;}
            for(std::map<char, long>::iterator it = tally.begin(); it != tally.end(); it++){mx = (mx > (it->second)) ? mx : (it->second);}
            chg += (group.size() - mx);
        }

        printf("%ld\n", chg);
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <map>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<std::string> v(n);
    for(long p = 0; p < n; p++){std::cin >> v[p];}

    std::map<std::string, std::set<std::string> > m;
    for(long p = 0; p < n; p++){
        for(long len = 1; len <= v[p].size(); len++){
            for(long s = 0; s <= v[p].size() - len; s++){
                std::string key = v[p].substr(s, len);
                if(m.count(key) == 0){std::set<std::string> t; m[key] = t;}
                m[key].insert(v[p]);
            }
        }
    }

    std::map<std::string, std::string> unique;
    for(int p = 0; p < n; p++){unique[v[p]] = v[p];}

    for(std::map<std::string, std::set<std::string> >::iterator it = m.begin(); it != m.end(); it++){
        std::string cand = it->first;
        std::set<std::string> nums = it->second;
        if(nums.size() > 1){continue;}
        std::string number = *nums.begin();
        if(cand.size() < unique[number].size()){unique[number] = cand;}
    }

    for(int p = 0; p < n; p++){std::cout << unique[v[p]] << std::endl;}

    return 0;
}

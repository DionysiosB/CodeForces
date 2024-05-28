#include <iostream>
#include <algorithm>
#include <vector>

bool cmp(std::pair<long, long> a, std::pair<long, long> b){
    if(a.first == b.first){return a.second > b.second;}
    else{return a.first < b.first;}
}

int main(){

    std::string s; std::cin >> s;
    std::vector<std::pair<long, long> > v(s.size());
    long cnt(0);
    for(long p = 0; p < s.size(); p++){
        v[p] = std::make_pair(cnt, p);
        cnt += (s[p] == '(') - (s[p] == ')');
    }

    sort(v.begin(), v.end(), cmp);

    std::string t(s.size(),'.');
    for(long p = 0; p < v.size(); p++){t[p] = s[v[p].second];}
    std::cout << t << std::endl;

    return 0;
}

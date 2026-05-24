#include <iostream>
#include <vector>

int main(){

    const int N = 26;
    std::string s, t; std::cin >> s >> t;
    std::vector<long> count(N, 0);

    for(long p = 0; p < s.size(); p++){
        if(s[p] == '?'){continue;}
        ++count[s[p] - 'a'];
    }

    long qm(0);
    long ind(0);
    while(ind < s.size()){
        if(s[ind] != '?'){++ind; continue;}
        ++qm; qm %= t.size();
        
        if(count[t[qm] - 'a'] > 0){--count[t[qm] - 'a'];}
        else{s[ind] = t[qm]; ++ind;}
    }

    std::cout << s << std::endl;

    return 0;
}

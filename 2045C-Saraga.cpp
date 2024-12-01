#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s, t; std::cin >> s >> t;

    long v[26] = {0};
    for(long p = 1; p < s.size(); p++){
        if(v[s[p] - 'a'] > 0){continue;}
        v[s[p] - 'a'] = p;
    }

    std::string res("-1"); bool found(false);
    for(long p = t.size() - 2; p >= 0; p--){
        if(v[t[p] - 'a'] <= 0){continue;}
        long tstlen = v[t[p] - 'a'] + t.size() - p;
        if(!found || tstlen < res.size()){
            found = true;
            res = s.substr(0, v[t[p] - 'a']) + t.substr(p);
        }
    }

    std::cout << res << std::endl;

    return 0;
}

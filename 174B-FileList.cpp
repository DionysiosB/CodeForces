#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);

    std::string s; getline(std::cin, s);
    std::vector<long> v;
    for(long p = 0; p < s.size(); p++){
        if(s[p] != '.'){continue;}
        v.push_back(p);
    }

    if(v.size() <= 0){std::cout << "NO" << std::endl; return 0;}

    std::string fln(s.substr(0, v[0])), ext(""), nxt("");
    std::vector<std::string> res;
    bool possible(fln.size() >= 1 && fln.size() <= 8);
    for(long p = 1; p < v.size(); p++){
        long len = v[p] - v[p - 1] - 1;
        if(len < 2 || 11 < len){possible = false; break;}

        std::string nxt("");
        if(len <= 9){ext = s.substr(v[p - 1] + 1, 1); nxt = s.substr(v[p - 1] + 2, len - 1);}
        else{ext = s.substr(v[p - 1] + 1, 3); nxt = s.substr(v[p - 1] + 4, len - 3);}

        res.push_back(fln + '.' + ext);
        fln = nxt;
    }

    ext = s.substr(v.back() + 1);
    if(ext.size() < 1 || ext.size() > 3){possible = false;}
    else{res.push_back(fln + "." + ext);}

    if(possible){
        std::cout << "YES" << std::endl;
        for(long p = 0; p < res.size(); p++){std::cout << res[p] << std::endl;}
    }
    else{std::cout << "NO" << std::endl;}

    return 0;
}

#include <iostream>
#include <vector>

bool dfs(long rem, long cs, const std::vector<bool> &w, std::vector<long> &res){

    if(rem <= 0){return true;}
    long sa = (cs < 0) ? -1 : 1;
    for(long p = 1; p <= w.size(); p++){
        if(!w[p]){continue;}
        if(res.size() > 0 && res.back() == p){continue;}
        long csn = cs - sa * p;
        long sb = (csn < 0) ? -1 : 1;
        if(csn == 0 || sa * sb >= 0){continue;}
        res.push_back(p);
        bool u = dfs(rem - 1, csn, w, res);
        if(u){return true;}
        else{res.pop_back();}
    }

    return false;
}


int main(){

    const int N = 10;
    std::vector<bool> w(N + 1);
    std::string s; std::cin >> s;
    for(long p = 1; p <= N; p++){w[p] = s[p - 1] - '0';}
    long m; std::cin >> m;
    std::vector<long> seq;
    long possible = dfs(m, 0, w, seq);
    if(possible){
        std::cout << "YES" << std::endl;
        for(long p = 0; p < seq.size(); p++){std::cout << seq[p] << " ";}
    }
    else{std::cout << "NO";}

    std::cout << std::endl;

    return 0;
}

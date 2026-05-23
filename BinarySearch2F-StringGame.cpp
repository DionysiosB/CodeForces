#include <iostream>
#include <vector>

bool check(const std::string &ss, const std::vector<long> &aa, const std::string rr, long x){
    std::vector<bool> h(ss.size(), 0);
    for(long p = x; p < aa.size(); p++){h[aa[p]] = 1;}
    long idx(0);
    for(long p = 0; p < ss.size(); p++){
        if(!h[p]){continue;}
        if(ss[p] == rr[idx]){++idx;}
        if(idx >= rr.size()){return true;}
    }

    return false;
}

int main(){

    const long N = 26;

    std::string s; std::cin >> s;
    std::string r; std::cin >> r;
    std::vector<long> a(s.size()); for(long p = 0; p < a.size(); p++){scanf("%ld", &a[p]); --a[p];}
    long left(0), right(s.size()), res(0);
    while(left <= right){
        long mid = (left + right) / 2;
        if(check(s, a, r, mid)){res = mid; left = mid + 1;}
        else{right = mid - 1;}
    }

    std::cout << res << std::endl;

    return 0;
}

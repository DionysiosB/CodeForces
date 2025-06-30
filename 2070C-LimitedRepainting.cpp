#include <iostream>
#include <vector>


bool check(const std::vector<long> &w, const std::string &s, long k, long penalty){

    bool paint(false); long cnt(0);
    for(long p = 0; p < w.size(); p++){
        if(w[p] < penalty){continue;}
        if(s[p] == 'B' && !paint){paint = true; ++cnt;}
        if(s[p] == 'R' && paint){paint = false;}
        if(cnt > k){return false;}
    }

    return true;
}


int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        std::vector<long> v(n); for(long p = 0; p < n; p++){std::cin >> v[p];}

        long left(0), right(1e9 + 7), res(0);
        while(left <= right){
            long mid = (left + right) / 2;
            if(check(v, s, k, mid)){right = mid - 1;}
            else{res = mid; left = mid + 1;}
        }

        std::cout << res << std::endl;
    }

}

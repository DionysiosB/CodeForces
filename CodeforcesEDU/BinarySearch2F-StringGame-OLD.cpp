#include <iostream>
#include <vector>

int main(){

    const long N = 26;

    std::string s; std::cin >> s;
    std::string r; std::cin >> r;
    std::vector<long> d(N, 0); for(long p = 0; p < r.size(); p++){++d[r[p] - 'a'];}
    std::vector<long> a(s.size()); for(long p = 0; p < a.size(); p++){scanf("%ld", &a[p]);}

    long ans(0);
    for(long p = a.size() - 1; p >= 0; p--){
        --d[s[p] - 'a'];
        bool done(true);
        for(long p = 0; p < N; p++){if(d[p] > 0){done = false; break;}}
        if(done){ans = p; break;}
    }

    std::cout << ans << std::endl;

    return 0;
}

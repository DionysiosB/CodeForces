#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

long long convert(long long x){
    std::vector<int> v;
    while(x > 0){v.push_back((x % 10) % 2); x /= 10;}
    std::reverse(v.begin(), v.end());

    long long ans(0);
    for(int p = 0; p < v.size(); p++){ans = 2 * ans + v[p];}
    return ans;
}


int main(){

    std::ios_base::sync_with_stdio(false);
    std::map<long long, long> m;
    long t; std::cin >> t;
    while(t--){
        char c; long long a; std::cin >> c >> a;
        long long pat = convert(a);
        if(c == '+'){
            if(m.count(pat) <= 0){m[pat] = 0;}
            ++m[pat];
        }
        else if(c == '-'){--m[pat];}
        else if(c == '?'){std::cout << m[pat] << std::endl;}
    }

    return 0;
}

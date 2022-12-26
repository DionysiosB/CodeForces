#include <iostream>

std::string s[2000];
int n, m, ans[2000];

long solve() {

    for(long b = 1; b <= 10; b++){
        for(long t = 0; t < (1<<b); t++) {
            std::string v;
            for(int k = 0; k < b; k++){v += (t>>k&1?"1":"0");}
            if(s[n].find(v) == -1){return b - 1;}
        }
    }

    return 0;
} 

int main() {
    std::cin >> n; 
    for(long p = 1; p <= n; p++){std::cin >> s[p];}
    std::cin >> m;
    while(m--){
        long a, b; std::cin >> a >> b;
        s[++n] = s[a] + s[b];
        int len = s[n].length();
        if(len > 1000){s[n]=s[n].substr(0,500)+s[n].substr(len-500,500);}
        long m1 = ans[a] > ans[b] ? ans[a] : ans[b];
        long m2 = solve();
        ans[n] = (m1 > m2) ? m1 : m2;
        std::cout << ans[n] << std::endl;
    }

    return 0;
}

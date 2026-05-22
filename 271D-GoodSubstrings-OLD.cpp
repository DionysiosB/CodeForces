#include <iostream>
#include <vector>
#include <set>

int main(){

    const int N = 26;
    const int B = 256;
    std::string s; std::cin >> s;
    const long n = s.size();
    std::string t; std::cin >> t;
    int k; std::cin >> k;
    std::vector<bool> bad(B, 0); for(long p = 0; p < N; p++){bad[p + 'a'] = (t[p] == '0');}
    std::vector<int> cb(n, 0); for(int p = 0; p < n; p++){cb[p] = ((p > 0) ? cb[p - 1] : 0) + bad[s[p]];}

    std::set<std::string> f;
    for(long p = 0; p < n; p++){
        for(long q = p; q < n; q++){
            int length = q - p + 1;
            int badCount = cb[q] - ((p > 0) ? cb[p - 1] : 0);
            if(badCount <= k){f.insert(s.substr(p, length));}
        }
    }

    std::cout << f.size() << std::endl;

    return 0;
}

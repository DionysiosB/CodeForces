#include <iostream>
#include <vector>

int main(){

    const long N = 26;

    long n; std::cin >> n;
    std::string s, t; std::cin >> s >> t;

    std::vector<long> v(N, 0);
    for(long p = 0; p < s.size(); p++){++v[s[p] - 'a'];}
    for(long p = 0; p < t.size(); p++){--v[t[p] - 'a'];}
    for(long p = 0; p < N; p++){if(v[p]){puts("-1"); return 0;}}

    std::vector<long> m;
    long cnt(0);
    for(long p = 0; p < n; p++){
        if(s[p] == t[p]){continue;}
        long ind(p + 1); while(s[ind] != t[p]){++ind;}
        for(long q = ind; q > p; q--){
            char x = s[q]; s[q] = s[q - 1]; s[q - 1] = x;
            m.push_back(q);
        }
    }

    printf("%ld\n", m.size());
    for(long p = 0; p < m.size(); p++){printf("%ld ", m[p]);}
    puts("");

    return 0;
}

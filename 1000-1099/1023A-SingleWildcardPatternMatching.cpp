#include <iostream>

int main(){

    long n, m; std::cin >> n >> m;
    std::string s, t; std::cin >> s >> t;

    bool possible(s.size() <= 1 + t.size());

    long sl(0), tl(0), sr(s.size() - 1), tr(t.size() - 1);
    while(sl < s.size() && tl < t.size() && s[sl] == t[tl]){++sl; ++tl;}
    if((sl < s.size()) && s[sl] != '*'){possible = false;}
    else if(sl == s.size()){possible = (s.size() == t.size());}

    while(0 <= sr && 0 <= tr && s[sr] == t[tr]){--sr; --tr;}
    if((sr >= 0) && s[sr] != '*'){possible = false;}
    else if(sr < 0){possible = (s.size() == t.size());}

    for(long p = tl; p <= tr; p++){if(t[p] < 'a' || t[p] > 'z'){possible = false;}}
    std::cout << (possible ? "YES" : "NO") << std::endl;

    return 0;
}

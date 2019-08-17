#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    const int N = 26;

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::vector<long> cv(N, 0);
        for(long p = 0; p < s.size(); p++){++cv[s[p] - 'a'];}

        std::string sa(""), sb("");
        for(long p = 0; p < N; p += 2){for(long u = 0; u < cv[p]; u++){sa += 'a' + p;}}
        for(long p = 1; p < N; p += 2){for(long u = 0; u < cv[p]; u++){sb += 'a' + p;}}
        bool done(false);
        if((sa[sa.size() - 1] != sb[0] - 1) && (sa[sa.size() - 1] != sb[0] + 1)){s = sa + sb; done = true;}
        else if((sb[sb.size() - 1] != sa[0] - 1) && (sb[sb.size() - 1] != sa[0] + 1)){s = sb + sa; done = true;}

        if(done){std::cout << s << std::endl;}
        else{std::cout << "No answer" << std::endl;}
    }

    return 0;
}

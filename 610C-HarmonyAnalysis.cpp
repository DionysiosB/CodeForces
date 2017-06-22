#include <iostream>
#include <vector>

std::string complement(std::string s, char x, char y){
    std::string res(s);
    for(int p = 0; p < s.size(); p++){res[p] = ((s[p] == x) ? y : x);}
    return res;
}

int main(){

    std::ios::sync_with_stdio(false);
    const char a = '+';
    const char b = '*';

    long n; std::cin >> n;
    std::vector<std::string> ans;
    std::string initial(1, a);
    ans.push_back(initial);
    for(int p = 0; p < n; p++){
        long len = ans.size();
        for(long p = 0; p < len; p++){
            std::string prev = ans[p];
            ans[p] += ans[p];
            ans.push_back(prev + complement(prev, a, b));
        }
    }

    for(long p = 0; p < ans.size(); p++){std::cout << ans[p] << std::endl;}

    return 0;
}

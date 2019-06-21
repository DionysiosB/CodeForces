#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;

    bool possible(false);
    for(long start = 0; start < k; start++){
        if(start + k >= n){continue;}
        bool pass(false);
        for(long u = start + k; u < n; u += k){
            if((s[start] == '.' && s[u] == '.') || s[u] != s[start]){
                if(s[start] == s[u]){s[start] = '0'; s[u] = '1';}
                else if(s[start] == '.'){s[start] = (s[u] == '0') ? '1' : '0';}
                else if(s[u] == '.'){s[u] = (s[start] == '0') ? '1' : '0';}
                pass = true; 
            }
        }

        //if(!pass){std::cout << start << " -> " << s << std::endl;}
        possible |= pass;
    }

    for(long p = 0; p < n; p++){if(s[p] == '.'){s[p] = '1';}}

    if(possible){std::cout << s << std::endl;}
    else{std::cout << "No" << std::endl;}

    return 0;
}

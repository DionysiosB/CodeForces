#include <iostream>

int main(){

    const int B = 26;
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long v[B] = {0};
        for(long p = 0; p < s.size(); p++){++v[s[p] - 'a'];}
        long mn(s.size()), mx(0);
        char mnc(' '), mxc(' ');
        for(long p = 0; p < B; p++){
            if(!v[p]){continue;}
            if(v[p] < mn){mn = v[p]; mnc = ('a' + p);}
            if(v[p] >= mx){mx = v[p]; mxc = ('a' + p);}
        }

        for(long p = 0; p < s.size(); p++){if(s[p] == mnc){s[p] = mxc; break;}}
        std::cout << s << std::endl;
    }

}

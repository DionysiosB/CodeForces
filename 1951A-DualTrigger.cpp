#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(0); bool adj(false);
        for(long p = 0; p < n; p++){
            cnt += (s[p] == '1');
            if(p > 0 && s[p - 1] == '1' && s[p] == '1'){adj = true;}
        }
        if(cnt == 2 && adj){puts("NO");}
        else{puts(cnt % 2 ? "NO" : "YES");}
    }

}

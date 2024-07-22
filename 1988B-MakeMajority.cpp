#include<iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long z(s[0] == '0'), a(s[0] == '1');
        for(long p = 1; p < n; p++){
            if(s[p] == '1'){++a;}
            else if(s[p - 1] == '1'){++z;}
        }

        puts(a > z ? "YES" : "NO");
    }

}

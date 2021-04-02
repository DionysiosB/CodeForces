#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){

        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        long cnt(0), prev(-1), last(-1);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '.'){continue;}
            if(prev < 0){++cnt; prev = p; continue;}
            if(p > prev + k){++cnt; prev = last;}
            last = p;
        }

        printf("%ld\n", cnt + (prev < last));
    }

}

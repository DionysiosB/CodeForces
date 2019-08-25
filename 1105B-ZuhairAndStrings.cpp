#include <iostream>

int main(){

    long n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;
    long mx(0);
    for(char x = 'a'; x <= 'z'; x++){
        long let(0), cnt(0);
        for(long p = 0; p < n; p++){
            if(s[p] != x){let = 0;}
            else{++let; if(let >= k){++cnt; let = 0;}}
        }
        mx = (mx > cnt) ? mx : cnt;
    }

    printf("%ld\n", mx);

    return 0;
}

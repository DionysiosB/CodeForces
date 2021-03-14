#include <iostream>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::string s; std::cin >> s;
        long idx(0); while(2 * idx + 2 < n && s[idx] == s[n - 1 - idx]){++idx;}
        puts(idx >= k ? "YES" : "NO");
    }

}

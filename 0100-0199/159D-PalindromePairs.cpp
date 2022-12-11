#include <iostream>
#include <string>
#include <vector>

int main(){

    std::string s; getline(std::cin, s);
    int n = s.size();
    std::vector<long long> start(n, 0);
    std::vector<long long> finish(n, 0);

    for(int p = 0; p < n; p++){
        for(int a = p, b = p; a >= 0 && b < n && s[a] == s[b]; a--, b++){++start[a]; ++finish[b];}
        for(int a = p, b = p + 1; a >= 0 && b < n && s[a] == s[b]; a--, b++){++start[a]; ++finish[b];}
    }

    long long total(0);
    for(int p = n - 2; p >= 0; p--){start[p] += start[p + 1];}
    for(int p = 0; p < n - 1; p++){total += finish[p] * start[p + 1];}
    printf("%lld\n", total);
    //for(int p = 0; p < n; p++){printf(" --- %lld\n", start[p]);}
    //for(int p = 0; p < n; p++){printf(" *** %lld\n", finish[p]);}

    return 0;
}

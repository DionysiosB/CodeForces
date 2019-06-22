#include <iostream>
#include <vector>

int main(){

    const long N = 26;
    long n, k; std::cin >> n >> k;
    std::vector<bool> a(N, 0);

    std::string s; std::cin >> s;
    for(long p = 0; p < s.size(); p++){a[s[p] - 'a'] = 1;}

    long w(0); std::vector<long> b(N, 0);
    for(long p = 0; p < N; p++){
        if(!a[p]){continue;}
        if((p > 0) && b[p - 1]){continue;}
        b[p] = 1; w += p + 1; --k;
        if(k <= 0){break;}
    }

    printf("%ld\n", (k == 0) ? w : -1);

    return 0;
}

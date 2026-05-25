#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> s;
    long prev(0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        if((p > 0) && (x == 1)){s.push_back(prev);}
        prev = x;
    }

    s.push_back(prev);
    printf("%ld\n", s.size());
    for(long p = 0; p < s.size(); p++){printf("%ld ", s[p]);}
    puts("");

    return 0;
}

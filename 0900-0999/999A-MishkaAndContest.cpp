#include <cstdio>
#include <queue>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::deque<long> s; for(long p = 0; p < n; p++){long x; scanf("%ld", &x); s.push_back(x);}
    while(!s.empty() && s.front() <= k){s.pop_front();}
    while(!s.empty() && s.back() <= k){s.pop_back();}
    printf("%ld\n", n - s.size());

    return 0;
}

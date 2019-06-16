#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> times(n, 0);
    for(int p = 0; p < n; p++){scanf("%ld", &times[p]);}
    sort(times.begin(), times.end());

    long count(0);
    long long waitTime(0);
    for(int p = 0; p < n; p++){if(waitTime <= times[p]){waitTime += times[p]; ++count;}}
    printf("%ld\n", count);

    return 0;
}

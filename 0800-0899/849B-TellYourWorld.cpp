#include <cstdio>
#include <vector>
#include <set>

bool check(std::vector<long> a, double slope){

    std::set<double> s;
    for(long p = 1; p < a.size(); p++){s.insert(a[p] - slope * p);}
    return (s.size() == 2);
}


int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
    bool res = check(a, a[2] - a[1]) || check(a, a[3] - a[2]) || check(a, (a[3] - a[1]) / 2.0);
    puts(res ? "Yes" : "No");

    return 0;
}

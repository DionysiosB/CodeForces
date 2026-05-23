#include <cstdio>
#include <set>

int main(){

    long n; scanf("%ld\n", &n);
    std::set<long> exp;
    long max(0);
    while(n--){
        long a; scanf("%ld", &a);
        while(exp.count(a)){exp.erase(a); ++a;}
        exp.insert(a);
        if(a > max){max = a;}
    }

    printf("%ld\n", max + 1 - exp.size());

    return 0;
}

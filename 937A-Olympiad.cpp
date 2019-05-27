#include <cstdio>
#include <set>

int main(){

    long n; scanf("%ld", &n);
    std::set<long> s;
    for(long p = 0; p < n; p++){
        long a; scanf("%ld", &a);
        if(a){s.insert(a);}
    }

    printf("%ld\n", s.size());

    return 0;
}

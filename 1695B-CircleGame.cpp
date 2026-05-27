#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        if(n % 2){puts("Mike"); continue;}
        long idx(0);
        for(long p = 0; p < n; p++){if(a[p] < a[idx]){idx = p;}}
        puts(idx % 2 ? "Mike" : "Joe");
    }

}

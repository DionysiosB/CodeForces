#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a, b;
        for(long p = 1; p <= 2 * n; p++){
            long x; scanf("%ld", &x);
            if(x % 2){a.push_back(p);}
            else{b.push_back(p);}
        }

        if(a.size() % 2){a.pop_back(); b.pop_back();}
        else if(a.size()){a.pop_back(); a.pop_back();}
        else{b.pop_back(); b.pop_back();}
        for(long p = 0; p < a.size(); p += 2){printf("%ld %ld\n", a[p], a[p + 1]);}
        for(long p = 0; p < b.size(); p += 2){printf("%ld %ld\n", b[p], b[p + 1]);}
    }

    return 0;
}

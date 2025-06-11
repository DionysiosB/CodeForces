#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n), b(n);
        for(long &x : a){scanf("%ld", &x);}
        for(long &x : b){scanf("%ld", &x);}

        std::vector<bool> seen(n + 1, 0);

        if(a.back() == b.back()){printf("%ld\n", n); continue;}

        long cnt(-1);
        for(long p = n - 2; cnt < 0 && p >= 0; p--){
            if(a[p] == b[p] || a[p] == a[p + 1] || b[p] == b[p + 1] || seen[a[p]] || seen[b[p]]){cnt = p;}
            seen[a[p + 1]] = seen[b[p + 1]] = true;
        }

        printf("%ld\n", cnt + 1);
    }

}

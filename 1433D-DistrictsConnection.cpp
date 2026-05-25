#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n + 1);
        bool possible(false);
        std::vector<long> first, second;
        for(long p = 1; p <= n; p++){
            scanf("%ld", &a[p]);
            if(a[p] != a[1]){second.push_back(p); possible = true;}
            else{first.push_back(p);}
        }

        if(!possible){puts("NO"); continue;}
        puts("YES");

        long x(a[1]), cnt(0);
        for(long p = 0; p < second.size() && cnt + 1 < n; p++, cnt++){printf("1 %ld\n", second[p]);}
        for(long p = 1; p < first.size() && cnt + 1 < n; p++, cnt++){printf("%ld %ld\n", first[p], second[0]);}

        for(long p = 1; p < first.size() && cnt + 1 < n; p++, cnt++){
            for(long q = 1; q < second.size() && cnt + 1 < n; q++, cnt++){
                printf("%ld %ld\n", first[p], second[q]);
            }
        }
    }

    return 0;
}

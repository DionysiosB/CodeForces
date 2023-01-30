#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::vector<long> > m(n, std::vector<long>(n - 1, 0));
        for(long row = 0; row < n; row++){for(long col = 0; col + 1 < n; col++){scanf("%ld", &m[row][col]);}}

        long a(m[0][0]), b(0), first(0);
        for(long row = 1; !first && row < n; row++){
            long x = m[row][0];
            if(a == x){first = a; break;}
            else if(b == x){first = b; break;}
            else{b = x;}
        }

        printf("%ld ", first);
        for(long row = 0; row < n; row++){
            if(m[row][0] == first){continue;}
            for(long col = 0; col + 1 < n; col++){printf("%ld ", m[row][col]);}
            break;
        }

        puts("");
    }

}

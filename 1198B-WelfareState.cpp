#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<bool> s(n, 0); 
    long q; scanf("%ld", &q);
    std::vector<std::vector<long> > b(q, std::vector<long>(3, 0));
    for(long p = 0; p < q; p++){
        scanf("%ld %ld", &b[p][0], &b[p][1]);
        if(b[p][0] == 1){scanf("%ld", &b[p][2]);}
    }

    long dist(0);
    for(long p = q - 1; p >= 0; p--){
        if(b[p][0] == 1){
            long who = b[p][1] - 1;
            long amount = b[p][2];
            if(s[who]){continue;}
            s[who] = 1;
            a[who] = (amount > dist) ? amount : dist;
        }
        else if(b[p][0] == 2){dist = (dist > b[p][1]) ? dist : b[p][1];}
    }

    for(long p = 0; p < n; p++){
        if(!s[p]){a[p] = (a[p] > dist) ? a[p] : dist;}
        printf("%ld ", a[p]);
    }

    return 0;
}

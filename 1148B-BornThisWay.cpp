#include <cstdio>
#include <vector>

int main(){

    long n, m, ta, tb, k; scanf("%ld %ld %ld %ld %ld", &n, &m, &ta, &tb, &k);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> b(m); for(long p = 0; p < m; p++){scanf("%ld", &b[p]);}

    long idx(0), mxt(0);
    if(k >= n || k >= m){mxt = -1;}
    for(long p = 0; p < n && p <= k && mxt >= 0; p++){
        const long arv = a[p] + ta;
        const long rem = k - p;
        while((idx + 1 < m) && b[idx] < arv){++idx;}
        if(arv <= b[idx] && (idx + rem < m)){
            const long tmp = b[idx + rem] + tb;
            mxt = (mxt > tmp) ? mxt : tmp;
        }
        else{mxt = -1; break;}
    }

    printf("%ld\n", mxt);

    return 0;
}

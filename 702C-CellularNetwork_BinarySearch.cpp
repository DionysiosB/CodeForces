#include <cstdio>
#include <vector>

bool check(const std::vector<long> &c, const std::vector<long> &t, long range){

    long u(0);
    if(c[0] + range < t[0]){return false;}
    if(c.back() > t.back() + range){return false;}

    for(long p = 0; p < c.size(); p++){
        long x = c[p];
        if((t[u] - range <= x) && (x <= t[u] + range)){continue;}
        else{while((x < t[u] - range) || (t[u] + range < x)){++u; if(u >= t.size()){return false;}}}
    }

    return true;
}


int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> b(m); for(long p = 0; p < m; p++){scanf("%ld", &b[p]);}

    long left(0), right(2100000000);
    while(left <= right){
        long mid = (left + right) / 2;
        if(check(a, b, mid)){right = mid - 1;}
        else{left = mid + 1;}
    }

    printf("%ld\n", left);

    return 0;
}

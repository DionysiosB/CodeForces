#include <cstdio>
#include <vector>
#include <algorithm>

bool check(long blen, long num, long slen, const std::vector<long> &attempts, long count){

    std::vector<long> w(2 + count, 0);
    for(long p = 1; p <= count; p++){w[p] = attempts[p];}
    w[count + 1] = blen + 1;
    sort(w.begin(), w.end());
    long total(0); for(long p = 1; p <= count + 1; p++){total += (w[p] - w[p - 1]) / (slen + 1);}
    return (total >= num);
}


int main(){

    long n, k, a; scanf("%ld %ld %ld\n", &n, &k, &a);
    long m; scanf("%ld", &m);
    std::vector<long> v(m + 1); for(long p = 1; p <= m; p++){scanf("%ld", &v[p]);}

    long left(0), right(m);
    bool possible(false);
    while(left <= right){
        long mid = (left + right) / 2;
        if(check(n, k, a, v, mid)){left = mid + 1;}
        else{right = mid - 1; possible = true;}
    }

    printf("%ld\n", possible ? left : (-1));

    return 0;
}

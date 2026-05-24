#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> diff(n, 0);
    long left(0), right(0);
    for(int p = 0; p < n; p++){
        long a, b; scanf("%ld %ld", &a, &b);
        diff[p] = 2 * (a - b);
        left += a; right += b;
    }

    long init(left - right);
    long col(0);
    long maxDiff(init); if(maxDiff < 0){maxDiff = -maxDiff;}

    for(int p = 0; p < n; p++){
        long cand = init - diff[p];
        if(cand < 0){cand = -cand;}
        if(cand > maxDiff){
            col = p + 1;
            maxDiff = cand;
        }
    }

    printf("%ld\n", col);

    return 0;
}

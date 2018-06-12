#include <cstdio>
#include <vector>

int main(){

    long long n, m, k; scanf("%lld %lld %lld\n", &n, &m, &k);

    std::vector<long long> array(n, 0), add(n + 1, 0);
    for(long long p = 0; p < n; p++){scanf("%lld", &array[p]);}

    std::vector<long long> left(m, 0), right(m, 0), value(m, 0);
    for(long long p = 0; p < m; p++){scanf("%lld %lld %lld", &left[p], &right[p], &value[p]);}

    std::vector<long long> q(m + 1, 0);
    for(long long p = 0; p < k; p++){
        long long x, y; scanf("%lld %lld", &x, &y);
        ++q[x - 1]; --q[y];
    }

    long long sum = 0;
    for(long long p = 0; p < m; p++){
        sum += q[p];
        add[left[p] - 1] += sum * value[p];
        add[right[p]]    -= sum * value[p];
    }

    long long totalAdd = 0;
    for(long long p = 0; p < n; p++){
        totalAdd += add[p];
        printf("%lld ", totalAdd + array[p]);
    }

    return 0;
}

#include <cstdio>
#include <vector>

int main(){

    long long n, m, k; scanf("%lld %lld %lld\n", &n, &m, &k);
    std::vector<long long> app(n), pos(n);
    for(long long p = 0; p < n; p++){long long temp; scanf("%lld", &temp); app[p] = temp - 1; pos[temp - 1] = p;}

    long long count(0);
    while(m--){
        long long currentApp; scanf("%lld\n", &currentApp); --currentApp;
        long long currentPos = pos[currentApp];
        count += (1 + (currentPos / k));
        if(currentPos == 0){continue;}

        long long previousApp = app[currentPos - 1];
        app[currentPos - 1] = currentApp; app[currentPos] = previousApp;
        --pos[currentApp]; ++pos[previousApp];
    }

    printf("%lld\n", count);


    return 0;
}

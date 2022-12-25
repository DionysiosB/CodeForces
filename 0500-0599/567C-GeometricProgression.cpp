#include <cstdio>
#include <map>

int main(){


    int64_t n, k; scanf("%lld %lld\n", &n, &k);
    std::map<int64_t, int64_t> initial, middle;
    int64_t total(0);
    while(n--){
        int64_t x; scanf("%lld", &x);

        if(x % k == 0){
            if(initial.count(x / k) <= 0){initial.insert(std::pair<int64_t, int64_t>(x / k, 0));}
            if(middle.count(x / k) <= 0){initial.insert(std::pair<int64_t, int64_t>(x / k, 0));}
            if(middle.count(x) <= 0){initial.insert(std::pair<int64_t, int64_t>(x, 0));}

            total += middle[x / k];
            middle[x] += initial[x / k];
        }

        if(initial.count(x) <= 0){initial.insert(std::pair<int64_t, int64_t>(x, 0));}
        ++initial[x];
    }

    printf("%lld\n", total);

    return 0;
}

#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    const int N = 10;
    const int M = 100;

    long n, k; scanf("%ld %ld\n", &n, &k);
    std::vector<std::pair<long, long> > skills(n);
    for(long p = 0; p < n; p++){
        long temp; scanf("%ld", &temp);
        skills[p] = std::pair<long, long>(temp % N, temp);
    }

    sort(skills.begin(), skills.end());

    for(long p = n - 1; p >= 0; p--){
        if(k <= 0){break;}
        long rem = (N - skills[p].first) % N;
        long skill = skills[p].second;
        if(rem > 0 && k >= rem){skills[p].first = 0; skills[p].second += rem; k -= rem;}
    }

    long total(0);
    for(long p = 0; p < n; p++){
        long skill = skills[p].second;
        long additional = (M - skill);
        if(additional > k){additional = k;}
        skill += additional; k -= additional;
        total += skill / N;
    }

    printf("%ld\n", total);

    return 0;
}

#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<long> day(m);
    std::vector<long> height(m);
    for(int p = 0; p < m; p++){
        long d, h; scanf("%ld %ld\n", &d, &h);
        day[p] = d; height[p] = h;
    }

    bool possible(1);
    long ans = height[0] + (day[0] - 1);
    long final = height[m - 1] + (n - day[m - 1]);
    if(final > ans){ans = final;}

    for(int p = 1; p < m; p++){
        long timeDiff = day[p] - day[p - 1];
        long heightDiff = height[p] - height[p - 1];
        long absDiff = (heightDiff > 0) ? heightDiff : -heightDiff;
        if(timeDiff < absDiff){possible = 0; break;}
        long candidate = (timeDiff + height[p] + height[p - 1]) / 2;
        if(candidate > ans){ans = candidate;}
    }

    if(possible){printf("%ld\n", ans);}
    else{puts("IMPOSSIBLE");}

    return 0;
}

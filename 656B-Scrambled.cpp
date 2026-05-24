#include <cstdio>
#include <vector>

int main(){ 

    const long MAX_DAYS = 1e7;

    int n; scanf("%d", &n);
    std::vector<int> m(n), r(n);
    for (int p = 0; p < n; p++){scanf("%d", &m[p]);}
    for (int p = 0; p < n; p++){scanf("%d", &r[p]);}

    double count(0);
    for (int day = 0; day < MAX_DAYS; day++){
        for(long p = 0; p < n; p++){if(day % m[p] == r[p]){++count; break;}}
    }

    printf("%.6lf\n", count / MAX_DAYS);
}

#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<int> time(n, 0);
    for(int p = 0; p < n; p++){scanf("%d", &time[p]);}
    sort(time.begin(), time.end());

    long penalty(0), current(10), solved(0);
    const int half(360);
    const int duration(720);
    for(int p = 0; p < n; p++){
        current += time[p];
        if(current > duration){break;}
        ++solved;
        if(current > half){penalty += (current - half);}
    }

    printf("%ld %ld\n", solved, penalty);

    return 0;
}

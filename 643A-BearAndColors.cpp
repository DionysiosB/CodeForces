#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d", &n);
    std::vector<int> a(n, 0);
    for(int p = 0; p < n; p++){scanf("%d", &a[p]); --a[p];}

    std::vector<int> ans(n, 0);
    for(int left = 0; left < n; left++){
        std::vector<int> count(n, 0);
        int best(0), bestCount(0);
        for(int right = left; right < n; right++){
            int col = a[right];
            ++count[col];
            if(count[col] > bestCount || (count[col] == bestCount && col < best)){best = col; bestCount = count[col];}
            ++ans[best];
        }
    }


    for(int p = 0; p < n; p++){printf("%d ", ans[p]);}
    puts("");

    return 0;
}

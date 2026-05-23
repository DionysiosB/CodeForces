#include <cstdio>
#include <vector>
#include <set>
#include <algorithm>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<int> coolness(n, 0);
    for(int p = 0; p < n; p++){scanf("%d", &coolness[p]);}
    sort(coolness.begin(), coolness.end());

    long cost(0);
    std::set<int> factors;
    for(int p = 0; p < n; p++){
        int final = coolness[p];
        while(factors.count(final) > 0){++final; ++cost;}
        factors.insert(final);
    }

    printf("%ld\n", cost);

    return 0;
}

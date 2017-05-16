#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>

int main(){

    int n; scanf("%d\n", &n);
    long m; scanf("%ld\n", &m);

    std::vector<int> a(n);
    for(int p = 0; p < n; p++){scanf("%d\n", &a[p]);}
    sort(a.begin(), a.end(), std::greater<int>());

    int count(0);
    while(m > 0){m -= a[count++];}
    printf("%d\n", count);

    return 0;
}

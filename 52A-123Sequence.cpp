#include <cstdio>
#include <iostream>
#include <algorithm>

int main(){

    long count[4] = {0};

    long n; scanf("%ld", &n);
    for(long p = 0; p < n; p++){int temp; scanf("%d", &temp); ++count[temp];}
    std::sort(count, count + 4);
    printf("%ld\n", count[1] + count[2]);

    return 0;
}

#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    std::vector<long> a(4); for(long p = 0; p < 4; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    bool possible(false);
    if(a[3] == a[0] + a[1] + a[2]){possible = true;}
    else if(a[0] + a[3] == a[1] + a[2]){possible = true;}
    puts(possible ? "YES" : "NO");

    return 0;
}

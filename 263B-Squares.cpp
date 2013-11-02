#include <cstdio>
#include <algorithm>

int main(){
    int n, k; scanf("%d %d", &n, &k);
    int *s = new int[n];
    for(int u = 0; u < n; u++){scanf("%d", s + u);}
    std::sort(s, s+n);
    if(k > n || (k < n-1 && s[n-k] == s[n - k - 1])){printf("-1\n");}
    else{printf("%d 0\n", s[n - k]);}
    return 0;
}

#include <cstdio>
#include <vector>

int main(){

    long n, s; scanf("%ld %ld", &n, &s);
    --s;
    std::vector<int> a(n); for(long p = 0; p < n; p++){scanf("%d", &a[p]);}
    std::vector<int> b(n); for(long p = 0; p < n; p++){scanf("%d", &b[p]);}

    bool ans(true);
    if(!a[0]){ans = false;}
    else if(a[s]){ans = true;}
    else if(!b[s]){ans = false;}
    else{
        ans = false;
        for(long p = s + 1; p < n; p++){if(a[p] && b[p]){ans = true; break;}}
    }

    puts(ans ? "YES" : "NO");

    return 0;
}

#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<bool> name(n + 1);
    long a(1), b(1);
    name[a] = 1;
    while(b <= n){long x = b; b += a; a = x; name[b] = 1;}
    for(long p = 1; p <= n; p++){putchar(name[p] ? 'O' : 'o');}

    return 0;
}

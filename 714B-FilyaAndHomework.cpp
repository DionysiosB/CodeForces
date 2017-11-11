#include <cstdio>
#include <set>

int main(){

    long n; scanf("%ld\n", &n);
    std::set<long> s;
    while(n--){long a; scanf("%ld", &a); s.insert(a);}

    if(s.size() <= 2){puts("YES"); return 0;}
    if(s.size() >= 4){puts("NO"); return 0;}

    long a = *s.begin();
    long b = *(++s.begin());
    long c = *(++(++s.begin()));
    puts(2 * b == a + c ? "YES" : "NO");

    return 0;
}

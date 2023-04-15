#include <cstdio>
 
int main() {
 
  long t; scanf("%ld", &t);
  while (t--) {
    long long n, k; scanf("%lld %lld", &n, &k);
    bool res = (n % 2 == 0) || ((n - k) % 2 == 0); 
    puts(res ? "YES" : "NO");
  }

}

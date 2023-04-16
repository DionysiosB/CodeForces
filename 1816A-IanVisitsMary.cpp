#include <cstdio>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}
 
int main() {
 
  long t; scanf("%ld", &t);
  while (t--) {
    long a, b; scanf("%ld %ld", &a, &b);
    if(gcd(a, b) == 1){printf("1\n%ld %ld\n", a, b);}
    else{printf("2\n%ld %ld\n%ld %ld\n", a - 1, 1, a, b);}
  }
}

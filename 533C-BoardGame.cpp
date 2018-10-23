#include <cstdio>

int main() {

  long a,b,c,d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
  puts((d >= a+b) || (c >= a+b) || (c >= a && d >= b) ? "Polycarp" : "Vasiliy");

  return 0;
}

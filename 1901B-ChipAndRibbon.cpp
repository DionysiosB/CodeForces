#include <cstdio>
 
int main(){
 
  long t; scanf("%ld", &t);
  while(t--){
    long n; scanf("%ld", &n);
    long prev(0); scanf("%ld", &prev);
    long long ans(prev - 1);
    for(long p = 1; p < n; p++){
      long x; scanf("%ld", &x);
      long diff = x - prev;
      diff = (diff > 0) ? diff : 0;
      ans += diff;
      prev = x;
    }
    printf("%lld\n", ans);
  }
  
}

#include<cstdio>
#include<vector>

int main(){

  long n; scanf("%ld", &n);
  std::vector<long> par(n + 1); for(long p = 2; p <= n; p++){scanf("%ld",&par[p]);}
  std::vector<long> sz(n + 1, 1); for(long p = n; p > 0; p--){sz[par[p]] += sz[p];}
  std::vector<double> f(n + 1, 1); for(long p = 2; p <= n; p++){f[p] = f[par[p]] + 1.0 + 0.5 * (sz[par[p]] - 1 - sz[p]);}
  for(long p = 1; p <= n; p++){printf("%.1f ", f[p]);}

  return 0;
}

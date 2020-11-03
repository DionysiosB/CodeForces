#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
	while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<std::vector<long> > ans(n + 1, std::vector<long>(m + 1, 0));
        std::vector<long> maps(n * m + 1, 0);

		for(long p = 1; p <= n; p++){for(long q = 1; q <= m; q++){long k; scanf("%ld", &k); maps[k] = q;}}
		for(long p = 1; p <= m; p++){for(long q = 1; q <= n; q++){long k; scanf("%ld", &k); ans[q][maps[k]] = k;}}
		for(long p = 1; p <= n; p++){for(long q = 1; q <= m; q++){printf("%ld ", ans[p][q]);}; puts("");}
	}

    return 0;
} 


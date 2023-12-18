#include <cstdio>
#include <vector>
 
int main(){
 
	long t; scanf("%ld", &t);
	while(t--){
		long n; scanf(" %ld", &n);
		std::vector<long> d(n + 1, 0);
		for(long p = 1; p < n; p++){
			long x, y; scanf("%ld %ld", &x, &y);
			++d[x]; ++d[y];
		}
		
		long leafcnt(0);
		for(long p = 1; p <= n; p++){leafcnt += (d[p] == 1);}
		printf("%ld\n", (leafcnt + 1) / 2);
	}
 
}

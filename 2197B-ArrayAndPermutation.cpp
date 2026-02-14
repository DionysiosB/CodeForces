#include <cstdio>
#include <vector>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
		long n; scanf("%ld", &n);
		std::vector<long> v(n + 1), z(n + 1), where(n + 1);
		for(long p = 1; p <= n; ++p){scanf("%ld", &v[p]); where[v[p]] = p;}
		bool possible(true);
		for(long p = 1; p <= n; ++p){
			scanf("%ld", &z[p]);
			if(where[z[p - 1]] > where[z[p]]){possible = false;}
		}
		
		puts(possible ? "YES" : "NO");
	}
}

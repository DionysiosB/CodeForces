#include <cstdio>
#include <vector>
#include <algorithm>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
		long n; scanf("%ld", &n);
		std::vector<long> where(n + 1);
		bool possible(true);
		for(long p = 1; p <= n; p++){
		    long w; scanf("%ld", &w);
		    long r(-1);
		    if((w >= p) && !(w % p)){r = w / p;}
		    else if((p >= w) && !(p % w)){r = p / w;}
		    if(r < 0 || (r & (r - 1)) ){possible = false;}
		}
		
		puts(possible ? "YES" : "NO");
	}
}

#include <cstdio>

int main(){
    
    const int B = 7;
    
    long t; scanf("%ld", &t);
    while(t--){
		long n; scanf("%ld", &n);
		long cnt(0); bool chg(false);
		int prev; scanf("%ld", &prev);
		for(long p = 1; p < n; p++){
		    int x; scanf("%d", &x);
		    if(!chg && (prev + x == B || x == prev)){++cnt; chg = true;}
		    else{chg = false;}
		    prev = x;
		}
		
		printf("%ld\n", cnt);
	}
}

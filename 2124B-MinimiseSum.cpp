#include <cstdio>
 
int main(){
	
	long t; scanf("%ld", &t);
	while(t--){
	    long n; scanf("%ld", &n);
	    long x(-1), y(-1); scanf("%ld %ld", &x, &y);
	    for(long p = 2; p < n; p++){long z; scanf("%ld", &z);}
	    printf("%ld\n", x + (x < y ? x : y));
	}
}

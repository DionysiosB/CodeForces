#include <cstdio>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
		long n; scanf("%ld", &n);
		bool possible(false);
		while(n--){
		    long x; scanf("%ld", &x); 
		    if(x == 67){possible = true;}
		}

		puts(possible ? "YES" : "NO");
	}
}

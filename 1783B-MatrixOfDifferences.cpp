#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
	long t; scanf("%ld", &t);
	while (t--) {
		long n; scanf("%ld", &n);
		std::vector<std::vector<long> > a(n, std::vector<long>(n));
		long left(1), right(n * n);
		bool flag(0);
		for(long row = 0; row < n; row++){
			for(long col = 0; col < n; col++){
				if(flag){a[row][col] = left++;}
				else{a[row][col] = right--;}
				flag ^= 1;
			}
			if (row & 1) reverse(a[row].begin(), a[row].end());
		}

		for(long row = 0; row < n; row++){for(long col = 0; col < n; col++){printf("%ld ", a[row][col]);}; puts("");}
	}
}

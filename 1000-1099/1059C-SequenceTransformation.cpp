#include <cstdio>

const long maxn = 1e6 + 6;

long seq[maxn];
long ans[maxn];
long ptr = 0;

void solve(long n, long mul){
	if(n == 1){ans[ptr++] = mul; return;}
	if(n == 2){ans[ptr++] = mul; ans[ptr++] = 2 * mul; return;}
	if(n == 3){ans[ptr++] = mul; ans[ptr++] = mul; ans[ptr++] = 3 * mul; return;}
	for(long p = 0; p < n; p++)if(seq[p] & 1){ans[ptr++] = mul;}
	for(long p = 0; p < n / 2; p++){seq[p] = seq[2 * p + 1] / 2;}
	solve(n / 2, 2 * mul);
}

int main(){

	long n; scanf("%ld", &n);
	for(long p = 0; p < n; p++){seq[p] = p + 1;}
	solve(n, 1);
	for(int p = 0; p < n; p++){printf("%ld ", ans[p]);}

	return 0;
}

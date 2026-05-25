#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<bool> b(n, 0);
        for(long p = 0; p < m; p++){
            long pos; scanf("%ld", &pos);
            b[pos - 1] = 1;
        }

        for (long p = 0; p < n; p++) {
			if(!b[p]){continue;}
			long idx(p); while(idx < n && b[idx]){++idx;}
			sort(a.begin() + p, a.begin() + idx + 1);
			p = idx;
		}


		bool res(true);
		for(long p = 1; p < n; p++){
            if(a[p - 1] > a[p]){res = false; break;}
        }

        puts(res ? "YES" : "NO");
    }

}

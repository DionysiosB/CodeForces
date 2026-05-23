#include <cstdio>
#include <vector>

int main(){

    const long B = 1e9;
    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n, 0), b(n, B), t(m), l(m), r(m), f(m);

    for(long p = 0; p < m; p++){
        scanf("%ld %ld %ld %ld", &t[p], &l[p], &r[p], &f[p]);
        --l[p]; --r[p];
        for(long q = l[p]; q <= r[p]; q++){
            if(t[p] == 1){a[q] += f[p];}
            else{b[q] = (b[q] < f[p] - a[q]) ? b[q] : (f[p] - a[q]);}
        }
    }

    for(long p = 0; p < n; p++){a[p] = 0;}

    bool possible(true);
    for(long p = 0; p < m; p++){
        long mn = -1;
        for(long q = l[p]; q <= r[p]; q++){
            if(t[p] == 1){a[q] += f[p];}
            else{mn = (mn > a[q] + b[q]) ? mn : (a[q] + b[q]);}
        }

        if (t[p] == 2 && mn != f[p]){possible = false; break;}
    }

    if(possible){
        puts("YES");
        for(long p = 0; p < n; p++){printf("%ld ", b[p]);}
        puts("");
    }
    else{puts("NO");}

    return 0;
}

#include<cstdio>
#include<vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n, 0), c(n, 0);
    std::vector<bool> pos(n, 1);
    long neg=0;

    for(long p = 0; p < n; p++){
        scanf("%ld", &a[p]);
        if(a[p] > 0){--a[p]; ++c[a[p]];}
        else{a[p] = -a[p]; --a[p]; --c[a[p]]; ++neg; pos[p] = false;}
    }

    long num(0); for(long p = 0; p < n; p++){num += (c[p] == m - neg);}

    for(long p = 0; p < n; p++){
        if(c[a[p]] != m - neg){puts(pos[p] ? "Lie" : "Truth");}
        else if(num == 1){puts(pos[p] ? "Truth" : "Lie");}
        else{puts("Not defined");}
    }

    return 0;
}

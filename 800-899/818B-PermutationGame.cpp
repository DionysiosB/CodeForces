#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n + 1, 0);
    std::vector<bool> b(n + 1, 0);

    std::vector<long> lead(m, 0);
    for(long p = 0; p < m; p++){scanf("%ld", &lead[p]);}

    bool possible(true);
    for(long p = 1; p < m; p++){
        long diff = lead[p] - lead[p - 1];
        if(diff <= 0){diff += n;}
        if(b[diff] && a[lead[p - 1]] != diff){possible = false; break;}
        b[diff] = 1;
        a[lead[p - 1]] = diff;
    }


    std::vector<long> rem;
    for(long p = 1; p <= n; p++){if(!b[p]){rem.push_back(p);}}
    for(long p = 1; p <= n; p++){
        if(a[p] > 0){continue;}
        if(rem.size() > 0){a[p] = rem.back(); rem.pop_back();}
        else{possible = 0; break;}
    }

    if(!possible){puts("-1");}
    else{for(long p = 1; p <= n; p++){printf("%ld ", a[p]);}; puts("");}

    return 0;
}

#include<cstdio>
#include<vector>

int main(){

    long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
    std::vector<long> v(n, 1);

    long current(1), sum(1);
    for(long p = 1; p < n; p++){
        if(b > 0){current = sum + 1; --b;}
        else if((p > 1) && (a > 0)){++current,--a;}

        v[p] = current;
        sum += current;
    }

    if((a > 0) || (b > 0)){puts("-1");}
    else{for(long p = 0; p < n; p++){printf("%ld ", v[p]);}; puts("");}

    return 0; 
}

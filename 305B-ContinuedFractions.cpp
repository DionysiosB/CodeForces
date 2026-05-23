#include <cstdio>
#include <vector>

int main(){

    long long a, b; scanf("%lld %lld\n", &a, &b);
    int n; scanf("%d\n", &n);
    std::vector<long long> cont(n, 0);
    for(long p = 0; p < n; p++){scanf("%lld", &cont[p]);}
    
    if(cont[n - 1] == 1){++cont[n - 2]; cont.pop_back(); --n;}

    std::vector<long long> frac;
    while(a > 0 && b > 0 ){
        frac.push_back(a / b);
        a %= b;
        long long temp = a; a = b; b = temp;
    }

    bool eq = (cont.size() == frac.size());
    for(int p = 0; p < cont.size() && p < frac.size(); p++){
        if(cont[p] != frac[p]){eq = 0; break;}
    }

    puts(eq ? "YES" : "NO");
    return 0;
}

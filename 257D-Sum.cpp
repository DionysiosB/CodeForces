#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    std::vector<char> sgn(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    long rightSum(0);
    for(long p = n - 1; p >= 0; p--){
        if(rightSum > 0){rightSum -= a[p]; sgn[p] = '-';}
        else{rightSum += a[p]; sgn[p] = '+';}
    }

    if(rightSum < 0){
        for(long p = 0; p < n; p++){
            if(sgn[p] == '+'){sgn[p] = '-';}
            else if(sgn[p] == '-'){sgn[p] = '+';}
        }
    }

    for(long p = 0; p < n; p++){putchar(sgn[p]);}
    puts("");

    return 0;
}

#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    long sum(0);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]); sum += a[p];}

    long ind(-1);
    for(long p = 0; p < n; p++){if((2 * a[p] != sum) && (a[p] != sum)){ind = p; break;}}
    if(ind < 0){puts("-1");}
    else{printf("1\n%ld\n", ind + 1);}

    return 0;
}

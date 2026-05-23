#include <cstdio>
#include <vector>

long count(const std::vector<long> &v, long left, long right, long paintedHeight){
    if(left >= right){return 0;}
    long minPos = left;
    for(long p = left; p < right; p++){minPos = (v[p] < v[minPos]) ? p : minPos;}
    long candA = right - left;
    long candB = count(v, left, minPos, v[minPos]) + count(v, minPos + 1, right, v[minPos]) + (v[minPos] - paintedHeight);
    return (candA < candB) ? candA : candB;
}


int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    long total = count(a, 0, n, 0);
    printf("%ld\n", total);

    return 0;
}

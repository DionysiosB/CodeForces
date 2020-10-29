#include <cstdio>
#include <vector>
#include <algorithm>

long binSearchLeft(const std::vector<long> &a, long num){
    long left(0), right(a.size() - 1);
    long where(a.size() + 1);
    while(left <= right){
        long mid = (left + right) / 2;
        if(a[mid] < num){left = mid + 1;}
        else if(a[mid] >= num){where = mid + 1; right = mid - 1;}
    }

    return where;
}

long binSearchRight(const std::vector<long> &a, long num){
    long left(0), right(a.size() - 1);
    long where(0);
    while(left <= right){
        long mid = (left + right) / 2;
        if(a[mid] <= num){where = mid + 1; left = mid + 1;}
        else if(a[mid] > num){right = mid - 1;}
    }

    return where;
}


int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    long k; scanf("%ld", &k);
    for(long p = 0; p < k; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        long idxA = binSearchLeft(a, x);
        long idxB = binSearchRight(a, y);
        printf("%ld ", idxB - idxA + 1);
    }
    puts("");

    return 0;
}

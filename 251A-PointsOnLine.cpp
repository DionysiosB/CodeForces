#include <cstdio>
#include <vector>


int main(){

    long n, d; scanf("%ld %ld\n", &n, &d);
    std::vector<long> array(n, 0);
    for(long p = 0; p < n; p++){scanf("%ld", &array[p]);} 

    long long total(0);
    long right(0);
    
    for(long left = 0; left < n - 1; left++){
        while(right < n && array[right] <= array[left] + d){++right;}
        --right;
        long long numPoints = right - left;
        //printf("Left:%ld\tRight:%ld\tDiff:%ld\n", left, right, numPoints);
        total += numPoints * (numPoints - 1) / 2;
    }

    printf("%lld\n", total);

    return 0;
}

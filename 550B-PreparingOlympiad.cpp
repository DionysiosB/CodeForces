#include <cstdio>
#include <vector>
#include <algorithm>


void printVec(std::vector<long> vv){for(int p = 0; p < vv.size(); p++){printf("%ld ", vv[p]);} puts("");}

long getSum(std::vector<long> input){
    long ans(0);
    for(int p = 0; p < input.size(); p++){ans += input[p];}
    return ans;
}

std::vector<long> addOneToBinary(std::vector<long> v){
    const int B = 2;
    ++v[0];
    for(int p = 0; p < v.size() - 1; p++){if(v[p] >= B){v[p] = 0; ++v[p + 1];}}
    return v;
}

bool checkSubset(std::vector<long> d, std::vector<long> u, long minSum, long maxSum, long rel){

    std::vector<long> subset;
    for(int p = 0; p < d.size() ;p++){
        if(u[p] == 0){continue;}
        subset.push_back(d[p]);
    }

    return ((subset.back() - subset[0] >= rel) && (getSum(subset) >= minSum) && (getSum(subset) <= maxSum));
}


int main(){

    long n, l, r, x; scanf("%ld %ld %ld %ld\n", &n, &l, &r, &x);
    std::vector<long> diff(n), incl(n, 0);
    bool done(0);
    for(long p = 0; p < n; p++){scanf("%ld", &diff[p]);}
    sort(diff.begin(), diff.end());

    long counter(0);
    do{
        incl = addOneToBinary(incl);
        if(getSum(incl) <= 1){continue;}
        counter += checkSubset(diff, incl, l, r, x);
    }while(getSum(incl) < n);

    printf("%ld\n", counter);

    return 0;
}

#include <cstdio>
#include <vector>

std::vector<long> longestIncreasingSequence(std::vector<long> a){

    if (a.empty()){return a;}

    std::vector<long> output(1,0);
    std::vector<long> p(a.size());
    long u(0), v(0);

    for (size_t i = 1; i < a.size(); i++){
        if (a[output.back()] < a[i]){p[i] = output.back(); output.push_back(i); continue;}

        for (u = 0, v = output.size()-1; u < v;){
            long c = (u + v) / 2;
            if (a[output[c]] < a[i]) u=c+1; else v=c;
        }

        if (a[i] < a[output[u]]){
            if (u > 0) p[i] = output[u-1];
            output[u] = i;
        }   
    }

    for (u = output.size(), v = output.back(); u--; v = p[v]) output[u] = v;
    return output;
}

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    printf("%ld\n", longestIncreasingSequence(a).size());

    return 0;
}

#include <cstdio>
#include <vector>

int main(){


    std::vector<long> v;
    for(long p = 0; v.size() < 1007; p++){
        if(p % 3 == 0){continue;}
        if(p % 10 == 3){continue;}
        v.push_back(p);
    }

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        printf("%ld\n", v[n - 1]);
    }

}

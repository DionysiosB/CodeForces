#include<cstdio>
#include<vector>
#include<iostream>
#include<string>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::pair<long, long> > v;
        std::string s(std::to_string(n));

        for(long a = 1; a <= 10000; a++){
            long start = a * s.size() - 10;
            start = (start > 1 ? start : 1);
            for(int b = start; b < s.size() * a; b++){
                long x(n * a - b), y(0);
                for(long p = 0; p < s.size() * a - b; p++){y *= 10; y += (s[p % s.size()] - '0');}
                if(x == y){ v.push_back({a,b});}
            }
        }

        printf("%ld\n", v.size());
        for(std::pair<long, long> x :  v){printf("%ld %ld\n", x.first, x.second);}
    }

}

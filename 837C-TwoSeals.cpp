#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);

    std::vector<std::pair<long, long> > v(n);
    for(long p = 0; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        v[p].first = x; v[p].second = y;
    }


    bool possible(0);
    for(long p = 0; p < n; p++){
        for(long q = p + 1; q < n; q++){
            if((v[p].first + v[q].first <= a) && (v[p].second + v[q].second <= b)){possible = 1;}
            if((v[p].first + v[q].second <= a)&& (v[p].second + v[q].first <= b)){possible = 1;}
            if((v[p].second + v[q].first <= a) && (v[p].first + v[q].second <= b)){possible = 1;}
            if((v[p].second + v[q].second <= a) && (v[p].first + v[q].first <= b)){possible = 1;}



        }
    }



    return 0;
}

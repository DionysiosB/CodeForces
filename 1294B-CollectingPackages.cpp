#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){

        long n; scanf("%ld", &n);
        std::vector<std::pair<long, long> > a(n); for(long p = 0; p < n; p++){scanf("%ld %ld", &a[p].first, &a[p].second);}
        sort(a.begin(), a.end());
        bool possible(true); std::string path; long x(0), y(0);
        for(long p = 0; p < n; p++){
            while(x < a[p].first){++x; path += 'R';}
            if(a[p].second < y){possible = false; break;}
            while(y < a[p].second){++y; path += 'U';}
        }

        if(possible){puts("YES"); printf("%s\n", path.c_str());}
        else{puts("NO");}
    }

    return 0;
}

#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> pos, neg; long z(0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        if(x > 0){pos.push_back(x);}
        else if(x < 0){neg.push_back(x);}
        else if(x == 0){++z;}
    }

    sort(neg.rbegin(), neg.rend());
    if(n == 1 && neg.size() == 1){printf("%ld\n", neg[0]);}
    else if(pos.empty() && neg.size() <= 1 && z > 0){puts("0");}
    else{
        for(long p = 0; p < pos.size(); p++){printf("%ld ", pos[p]);}
        for(long p = neg.size() % 2; p < neg.size(); p++){printf("%ld ", neg[p]);}
        puts("");
    }

    return 0;
}

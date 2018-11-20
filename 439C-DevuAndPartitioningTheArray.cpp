#include<cstdio>
#include<algorithm>
#include<vector>

int main(){

    long n, k, r; scanf("%ld %ld %ld", &n, &k, &r);
    std::vector<long> evens, odds;
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        if(x & 1){odds.push_back(x);} else{evens.push_back(x);}
    }

    if((odds.size() < k - r) || ((odds.size() - (k - r)) & 1) || (evens.size() + (odds.size() - (k - r)) / 2 < r)){puts("NO");}
    else{
        puts("YES");
        long evenCount(r), oddCount(k - r);
        if(evenCount > 0){--evenCount;} else{--oddCount;}
        for(long p = 0; p < evenCount; p++){
            if(evens.size()){printf("1 %ld\n",evens.back()); evens.pop_back();}
            else if(odds.size() > 1){printf("2 %ld %ld\n", odds.back(), odds[odds.size() - 2]); odds.pop_back(); odds.pop_back();}
        }

        for(long p = 0; p < oddCount; p++){if(odds.size()){printf("1 %ld\n", odds.back()); odds.pop_back();}}

        printf("%ld ", odds.size() + evens.size());
        while(odds.size()){printf("%ld ", odds.back()); odds.pop_back();}
        while(evens.size()){printf("%ld ", evens.back()); evens.pop_back();}
        puts("");
    }


    return 0;
}

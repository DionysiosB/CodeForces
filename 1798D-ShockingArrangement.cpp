#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> neg, pos;
        long mx(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x >= 0){pos.push_back(x);}
            else{neg.push_back(x);}
            mx = (mx > x ? mx : x);
        }

        if(!mx){puts("No"); continue;}
        puts("Yes");

        std::vector<long> ans;
        long long cs(0);
        for(long p = 0; p < n; p++){
            if(cs <= 0){ans.push_back(pos.back()); pos.pop_back();}
            else{ans.push_back(neg.back()); neg.pop_back();}
            cs += ans.back();
        }

        for(long x : ans){printf("%ld ", x);}
        puts("");
    }

}

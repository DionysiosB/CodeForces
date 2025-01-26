#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::multiset<long, std::greater<long> > msa, msb;
        long long diff(0);

        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            msa.insert(x);
            diff += x;
        }

        for(long p = 0; p < m; p++){
            long x; scanf("%ld", &x);
            if(msa.count(x)){msa.erase(msa.find(x));}
            else{msb.insert(x);}
            diff -= x;
        }

        if(diff){puts("No"); continue;}

        while(!msb.empty() && !msa.empty() && msa.size() >= msb.size() && *msb.begin() >= *msa.begin()){
            long x = *msb.begin();
            long y = *msa.begin();
            msb.erase(msb.begin());
            if(x == *msa.begin()){msa.erase(msa.begin());}
            else{msb.insert(x / 2); msb.insert((x + 1) / 2);}
        }

        puts(msa.empty() && msb.empty() ? "Yes" : "No");
    }

}

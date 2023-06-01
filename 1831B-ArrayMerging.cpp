#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> a, b;
        long prev(-1), cur(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x != prev){
                if(prev > 0 && !a.count(prev) || a[prev] < cur){a[prev] = cur;}
                cur = 0;
            }
            ++cur; prev = x;
        }
        if(!a.count(prev) || a[prev] < cur){a[prev] = cur;}

        prev = -1; cur = 0; 
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x != prev){
                if(prev > 0 && !b.count(prev) || b[prev] < cur){b[prev] = cur;}
                cur = 0;
            }
            ++cur; prev = x;
        }
        if(!b.count(prev) || b[prev] < cur){b[prev] = cur;}


        long mx(0);
        for(std::map<long, long>::iterator it = a.begin(); it != a.end(); it++){
            long key = it->first;
            long val = it->second;
            if(key > 0 && b.count(key)){val += b[key];}
            mx = (mx > val) ? mx : val;
        }
        for(std::map<long, long>::iterator it = b.begin(); it != b.end(); it++){
            long key = it->first;
            long val = it->second;
            if(key > 0 && a.count(key)){val += a[key];}
            mx = (mx > val) ? mx : val;
        }

        printf("%ld\n", mx);
    }

}

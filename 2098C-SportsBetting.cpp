#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> m;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            ++m[x];
        }


        long prev(-1);
        bool ans(false);
        for(std::map<long, long>::iterator it = m.begin(); !ans && it != m.end(); it++){
            const long day = it->first;
            const long num = it->second;
            if(num >= 4){ans = true;}
            else if(num >= 2){
                if(day == prev + 1){ans = true;}
                else{prev = day;}
            }
            else if(day == prev + 1){prev = day;}
        }

        puts(ans ? "Yes" : "No");
    }

}

#include <iostream>
 
long mn(long x, long y){return (x < y) ? x : y;}
 
int main(){
 
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long last[4] = {-1,-1,-1,-1};
        long len(s.size() + 1);
        bool found(false);
        for(long p = 0; p < s.size(); p++){
            last[s[p] - '0'] = p;
            long prev = mn(mn(last[1], last[2]), last[3]);
            if(prev < 0){continue;}
            found = true;
            long tst = p - prev + 1;
            len = mn(len, tst);
        }
 
        printf("%ld\n", found * len);
    }
 
    return 0;
}

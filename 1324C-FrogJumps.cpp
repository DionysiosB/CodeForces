#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        s += 'R';
        long mx(0), last(-1);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'L'){continue;}
            long diff = p - last;
            last = p;
            mx = (mx > diff) ? mx : diff;
        }

        printf("%ld\n", mx);
    }

    return 0;
}

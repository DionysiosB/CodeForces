#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::vector<long> a(s.size(), 0), z(s.size(), 0);
        for(long p = 0; p < s.size(); p++){
            z[p] = (p ? z[p - 1] : 0) + (s[p] == '0');
            a[p] = (p ? a[p - 1] : 0) + (s[p] == '1');
        }

        long tz(z.back()), ta(a.back());

        long res(ta < tz ? ta : tz);
        for(long p = 0; p < s.size(); p++){
            long x = a[p] + (tz - z[p]); 
            long y = z[p] + (ta - a[p]);
            res = res < x ? res : x;
            res = res < y ? res : y;
        }

        printf("%ld\n", res);
    }


}

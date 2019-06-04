#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, a, b; std::cin >> n >> a >> b;
    std::string s; std::cin >> s;

    long total(a + b);
    for(long p = 0; p < s.size(); p++){
        if(s[p] == '*'){continue;}
        if(p == 0 || (s[p - 1] != 'a' && s[p - 1] != 'b')){
            if(a >= b && a > 0){s[p] = 'a'; --a;}
            else if(b >= a && b > 0){s[p] = 'b'; --b;}
        }
        else if(s[p - 1] != 'a' && a > 0){s[p] = 'a'; --a;}
        else if(s[p - 1] != 'b' && b > 0){s[p] = 'b'; --b;}
    }

    std::cout << (total - a - b) << std::endl;

    return 0;
}

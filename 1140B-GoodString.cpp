#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        long mn(s.size()), rem(0); 
        for(long p = 0; p < s.size(); p++){if(s[p] == '<'){++rem;} else{break;}}
        mn = (mn < rem) ? mn : rem;
        rem = 0;
        for(long p = s.size() - 1; p >= 0; p--){if(s[p] == '>'){++rem;} else{break;}}
        mn = (mn < rem) ? mn : rem;
        printf("%ld\n", mn);
    }

    return 0;
}

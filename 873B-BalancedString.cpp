#include <iostream>
#include <map>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    std::map<long, long> m; m[0] = -1;
    long total(0), maxLength(0);
    for(long p = 0; p < s.size(); p++){
        total += (s[p] == '1') ? 1 : -1;
        long length(0);
        if(m.count(total)){length = p - m[total];}
        else{m[total] = p;}
        maxLength = (maxLength > length) ? maxLength : length;
    }

    printf("%ld\n", maxLength);

    return 0;
}

#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    s += 'S';

    long mx(0), cnt(0), prev(0), sum(0), num(0), single(0);
    for(long p = 0; p <= n; p++){
        if(cnt == 0 && s[p] == 'S'){prev = 0;}
        else if(s[p] == 'S'){
            ++num; single = (single > cnt) ? single : cnt;
            long total = cnt + prev + (prev > 0);
            mx = (mx > total) ? mx : total;
            prev = cnt; cnt = 0;
        }
        else if(s[p] == 'G'){++cnt; ++sum;}
    }

    mx += (single == mx && num > 1);
    mx = (mx < sum) ? mx : sum;
    printf("%ld\n", mx);

    return 0;
}

#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    bool fl(0), fr(0), fu(0), fd(0);
    long count(1);

    for(long p = 0; p < s.size(); p++){
        if(s[p] == 'L'){fl = 1; if(fr){++count; fr = fu = fd = 0;}}
        else if(s[p] == 'R'){fr = 1; if(fl){++count; fl = fu = fd = 0;}}
        else if(s[p] == 'U'){fu = 1; if(fd){++count; fl = fr = fd = 0;}}
        else if(s[p] == 'D'){fd = 1; if(fu){++count; fl = fr = fu = 0;}}
    }

    std::cout << count << std::endl;

    return 0;
}

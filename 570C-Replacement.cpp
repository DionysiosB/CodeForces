#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    char dot = '.';

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::string s; getline(std::cin, s);
    std::vector<bool> dots(n + 2, 0);

    long dotCount(0), groupCount(0);

    for(long p = 0; p < n; p++){
        if(s[p] == dot){
            dots[p + 1] = 1; 
            ++dotCount;
            if(dots[p] == 0){++groupCount;}
        }
    }

    while(m--){
        
        long pos; char c;
        std::cin >> pos >> c;

        bool wasDot = (s[pos - 1] == dot);
        bool willDot = (c == dot);
        s[pos - 1] = c; dots[pos]= willDot;

        if(wasDot && !willDot){
            if(dots[pos - 1] && dots[pos + 1]){--dotCount; ++groupCount;}
            else if(dots[pos - 1] || dots[pos + 1]){--dotCount;}
            else if(!dots[pos - 1] && !dots[pos + 1]){--dotCount; --groupCount;}

        }

        if(!wasDot && willDot){
            if(dots[pos - 1] && dots[pos + 1]){++dotCount; --groupCount;}
            else if(dots[pos - 1] || dots[pos + 1]){++dotCount;}
            else if(!dots[pos - 1] && !dots[pos + 1]){++dotCount; ++groupCount;}

        }
        printf("%ld\n", dotCount - groupCount);

    }

    return 0;
}

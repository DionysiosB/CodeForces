#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

int main(){

    long a, b; scanf("%ld %ld\n", &a, &b);
    std::string script; getline(std::cin, script);
    long n = script.size();

    std::vector<std::pair<long, long> > pos(n + 1);
    pos[0] = std::pair<long, long>(0,0);
    for(int p = 0; p < n; p++){
        if(script[p] == 'U'){pos[p + 1] = std::pair<long, long>(     pos[p].first,  1 + pos[p].second);}
        if(script[p] == 'D'){pos[p + 1] = std::pair<long, long>(     pos[p].first, -1 + pos[p].second);}
        if(script[p] == 'R'){pos[p + 1] = std::pair<long, long>( 1 + pos[p].first,      pos[p].second);}
        if(script[p] == 'L'){pos[p + 1] = std::pair<long, long>(-1 + pos[p].first,      pos[p].second);}
    }

    bool possible = 0;
    for(long p = 0; p <= n; p++){

        long diffX = a - pos[p].first;
        long diffY = b - pos[p].second;

        long times = 1;
        if(pos[n].first != 0){times = diffX / pos[n].first;}
        else if(pos[n].second != 0){times = diffY / pos[n].second;}
        if(times >= 0 && pos[n].first * times == diffX && pos[n].second * times == diffY){possible = 1; break;}

    }

    puts(possible ? "Yes" : "No");

    return 0;
}

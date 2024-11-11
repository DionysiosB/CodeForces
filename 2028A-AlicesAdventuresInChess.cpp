#include <iostream>

bool check(long x, long y, long a, long b, long xt, long yt){
    if(xt == 0 && yt == 0){return x == a && y == b;}
    else if(xt == 0){return (x == a && (b - y) % yt == 0 && (b - y) / yt > 0);}
    else if(yt == 0){return (y == b && (a - x) % xt == 0 && (a - x) / xt > 0);}
    else{return (a - x) % xt == 0 && (b - y) % yt == 0 && (a - x) / xt >= 0 && (a - x) / xt == (b - y) / yt;}
}

int main (){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, a, b; std::cin >> n >> a >> b;
        std::string s; std::cin >> s;
        long xt(0), yt(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'N'){++yt;}
            else if(s[p] == 'S'){--yt;}
            else if(s[p] == 'E'){++xt;}
            else if(s[p] == 'W'){--xt;}
        }

        long x(0), y(0);
        bool ans(check(0, 0, a, b, xt, yt));
        for(long p = 0; p < s.size() && !ans; p++){
            if(s[p] == 'N'){++y;}
            else if(s[p] == 'S'){--y;}
            else if(s[p] == 'E'){++x;}
            else if(s[p] == 'W'){--x;}
            if(check(x, y, a, b, xt, yt)){ans = true;}
        }

        std::cout << (ans ? "YES" : "NO") << std::endl;
    }

}

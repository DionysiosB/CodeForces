#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        long tx(0), ty(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'N'){++ty;}
            else if(s[p] == 'S'){--ty;}
            else if(s[p] == 'E'){++tx;}
            else if(s[p] == 'W'){--tx;}
        }

        if(tx % 2 || ty % 2){std::cout << "NO" << std::endl;; continue;}
        long hx(tx / 2), hy(ty / 2); bool rfa(false), rfb(false);

        long cx(0), cy(0); std::string r(s);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'N'){
                if(!rfa || cy < hy){++cy; r[p] = 'H'; rfa = true;}
                else{r[p] = 'R'; rfb = true;}
            }
            else if(s[p] == 'S'){
                if(!rfa || cy > hy){--cy; r[p] = 'H'; rfa = true;}
                else{r[p] = 'R'; rfb = true;}
            }
            else if(s[p] == 'E'){
                if(!rfa || cx < hx){++cx; r[p] = 'H'; rfa = true;}
                else{r[p] = 'R'; rfb = true;}
            }
            else if(s[p] == 'W'){
                if(!rfa || cx > hx){--cx; r[p] = 'H'; rfa = true;}
                else{r[p] = 'R'; rfb = true;}
            }
        }

        if(rfa && rfb){std::cout << r << std::endl;}
        else{std::cout << "NO" << std::endl;}
    }

}

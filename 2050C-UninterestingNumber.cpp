#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string w; std::cin >> w;
        long d(0), r(0), s(0);
        for(long p = 0; p < w.size(); p++){
            int x = (w[p] - '0');
            s += x;
            d += (x == 2);
            r += (x == 3);
        }

        s %= 9;
        bool possible(false);
        if(!s){possible = true;}
        else if(s == 1 && ( (d > 3) || (d > 0 && r > 0))){possible = true;}
        else if(s == 2 && ( (d >= 8) || (d >= 5 && r >= 1) || (d >= 2 && r >= 2) ) ){possible = true;}
        else if(s == 3 && ( (d >= 3) || (r >= 1) ) ){possible = true;}
        else if(s == 4 && (d >= 7 || (d >= 4 && r >= 1) || (d >= 1 && r >= 2) )){possible = true;}
        else if(s == 5 && d >= 2){possible = true;}
        else if(s == 6 && (d >= 6 || (d >= 3 && r >= 1) || (r >= 2) )){possible = true;}
        else if(s == 7 && d > 0){possible = true;}
        else if(s == 8 && (d >= 5 || (d >= 2 && r >= 1) )){possible = true;}
        else{possible = false;}

        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}

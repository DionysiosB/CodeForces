#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::string s; std::cin >> s;

        long x(0), y(0), minx(0), maxx(0), miny(0), maxy(0);
        for(char c : s){
            if     (c == 'L'){--y; miny = (miny < y ? miny : y);}
            else if(c == 'R'){++y; maxy = (maxy > y ? maxy : y);}
            else if(c == 'U'){--x; minx = (minx < x ? minx : x);}
            else if(c == 'D'){++x; maxx = (maxx > x ? maxx : x);}

            if(maxx >= n + minx){
                minx += (x == minx);
                break;
            }

            if(maxy >= m + miny){
                miny += (y == miny);
                break;
            }
        }

        std::cout << (1 - minx) << " " << (1 - miny) << std::endl;
    }


}

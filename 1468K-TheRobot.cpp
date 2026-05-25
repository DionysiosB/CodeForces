#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long xs(0), ys(0);
        long xo(0), yo(0);
        for(long p = 0; p < s.size(); p++){
            //printf("Start p=%ld x=%ld y=%ld\n", p, xs, ys);
            long dx(0), dy(0);
            if(s[p] == 'L'){dx = -1;}
            else if(s[p] == 'R'){dx = 1;}
            else if(s[p] == 'D'){dy = -1;}
            else if(s[p] == 'U'){dy = 1;}

            long xt(xs + dx), yt(ys + dy);
            long xcur(xs), ycur(ys);
            //printf("--> Test xt=%ld yt=%ld\n", xt, yt);
            for(long q = p + 1; q < s.size(); q++){
                long ex(0), ey(0);
                if(s[q] == 'L'){ex = -1;}
                else if(s[q] == 'R'){ex = 1;}
                else if(s[q] == 'D'){ey = -1;}
                else if(s[q] == 'U'){ey = 1;}
                //printf("--> WILL xcur=%ld ycur=%ld\n", xcur + ex, ycur + ey);
                if(xcur + ex == xt && ycur + ey == yt){continue;}
                xcur += ex; ycur += ey;
                //printf("--> Cur xcur=%ld ycur=%ld\n", xcur, ycur);
            }

            if(xcur == 0 && ycur == 0){xo = xt; yo = yt; break;}
            xs += dx; ys += dy;
        }

        printf("%ld %ld\n", xo, yo);

    }


}

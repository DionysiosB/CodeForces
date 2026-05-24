#include <iostream>
#include <vector>

int main(){

    const int B = 5000;
    int x1, y1, x2, y2, x3, y3; std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    std::vector<std::pair<int, int> > pts;
    for(int x = -B; x <= B; x++){
        for(int y = -B; y <= B; y++){
            int xd = x2 - x1;
            int yd = y2 - y1;
            int xf = x - x3;
            int yf = y - y3;
            if((xd == xf && yd == yf) || (xd == -xf && yd == -yf)){pts.push_back(std::make_pair(x, y)); continue;}

            xd = x3 - x2;
            yd = y3 - y2;
            xf = x - x1;
            yf = y - y1;
            if((xd == xf && yd == yf) || (xd == -xf && yd == -yf)){pts.push_back(std::make_pair(x, y)); continue;}

            xd = x3 - x1;
            yd = y3 - y1;
            xf = x - x2;
            yf = y - y2;
            if((xd == xf && yd == yf) || (xd == -xf && yd == -yf)){pts.push_back(std::make_pair(x, y)); continue;}
        }
    }

    std::cout << pts.size() << std::endl;
    for(int p = 0; p < pts.size(); p++){std::cout << pts[p].first << " " << pts[p].second << std::endl;}

    return 0;
}

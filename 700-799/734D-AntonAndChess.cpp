#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    long kx, ky; std::cin >> kx >> ky;
    long dk(ky - kx), sk(kx + ky);
    std::vector<std::pair<long, bool> > nw, nn, ne, ee, se, ss, sw, ww;

    while(n--){
        char t; long x, y; std::cin >> t >> x >> y;
        if(y - x == dk && x > kx){nw.push_back(std::make_pair(x - kx, (t == 'B' || t == 'Q')));}
        if(y - x == dk && x < kx){se.push_back(std::make_pair(kx - x, (t == 'B' || t == 'Q')));}
        if(y + x == sk && x > kx){sw.push_back(std::make_pair(x - kx, (t == 'B' || t == 'Q')));}
        if(y + x == sk && x < kx){ne.push_back(std::make_pair(kx - x, (t == 'B' || t == 'Q')));}

        if(y == ky && x > kx){ww.push_back(std::make_pair(x - kx, (t == 'R' || t == 'Q')));}
        if(y == ky && x < kx){ee.push_back(std::make_pair(kx - x, (t == 'R' || t == 'Q')));}
        if(x == kx && y > ky){nn.push_back(std::make_pair(y - ky, (t == 'R' || t == 'Q')));}
        if(x == kx && y < ky){ss.push_back(std::make_pair(ky - y, (t == 'R' || t == 'Q')));}
    }

    sort(nw.begin(), nw.end());
    sort(nn.begin(), nn.end());
    sort(ne.begin(), ne.end());
    sort(ee.begin(), ee.end());
    sort(se.begin(), se.end());
    sort(ss.begin(), ss.end());
    sort(sw.begin(), sw.end());
    sort(ww.begin(), ww.end());

    bool check = (!nw.empty() && nw[0].second) || (!nn.empty() && nn[0].second) || (!ne.empty() && ne[0].second) || (!ee.empty() && ee[0].second) || (!se.empty() && se[0].second) || (!ss.empty() && ss[0].second) || (!sw.empty() && sw[0].second) || (!ww.empty() && ww[0].second); 

    puts(check ? "YES" : "NO");

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

struct perf{std::string name; long pts, diff, scored;};

bool perfCompare(perf a, perf b){
    if(a.pts > b.pts){return true;}
    else if(a.pts == b.pts && a.diff > b.diff){return true;}
    else if(a.pts == b.pts && a.diff == b.diff && a.scored > b.scored){return true;}
    return false;
}

int main(){

    long n; std::cin >> n;
    std::map<std::string, perf> m;
    for(long p = 0; p < n; p++){
        std::string s; std::cin >> s;
        m[s].name = s; m[s].pts = m[s].diff = m[s].scored = 0;
    }

    for(long p = 0; p < n * (n - 1) / 2; p++){
        std::string names, goals; std::cin >> names >> goals;
        std::string xn(""), yn(""); bool dash(0);
        for(long p = 0; p < names.size(); p++){
            if(names[p] == '-'){dash = true;}
            else if(dash){yn += names[p];}
            else{xn += names[p];}
        }

        long xg(0), yg(0); bool colon(0);
        for(long p = 0; p < goals.size(); p++){
            if(goals[p] == ':'){colon = true;}
            else if(colon){yg = 10 * yg + (goals[p] - '0');}
            else{xg = 10 * xg + (goals[p] - '0');}
        }

        m[xn].scored += xg; m[yn].scored += yg;
        m[xn].diff += xg - yg; m[yn].diff += yg - xg;
        if(xg > yg){m[xn].pts += 3;}
        else if(xg < yg){m[yn].pts += 3;}
        else {m[xn].pts += 1; m[yn].pts += 1;}
    }

    std::vector<perf> v;
    for(std::map<std::string, perf>::iterator it = m.begin(); it != m.end(); it++){v.push_back(it->second);}
    sort(v.begin(), v.end(), perfCompare);
    std::vector<std::string> res(n / 2); for(long p = 0; p < n / 2; p++){res[p] = v[p].name;}
    sort(res.begin(), res.end());
    for(long p = 0; p < res.size(); p++){std::cout << res[p] << std::endl;}

    return 0;
}

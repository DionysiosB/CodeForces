#include <iostream>
#include <vector>
#include <map>
#include <set>

std::vector<bool> getBinaryVector(long x){
    std::vector<bool> v;
    while(x > 0){v.push_back(x % 2); x /= 2;}
    return v;
}

int countOnes(std::vector<bool> v){
    int cnt(0);
    for(int p = 0; p < v.size(); p++){cnt += v[p];}
    return cnt;
}

int main(){

    int n, m; std::cin >> n >> m;
    std::map<std::string, int> nmp;
    std::vector<std::string> nmv(n);
    for(int p = 0; p < n; p++){std::string x; std::cin >> x; nmp[x] = p; nmv[p] = x;}
    std::set<std::pair<int, int> > enset;
    for(int p = 0; p < m; p++){
        std::string x, y; std::cin >> x >> y;
        int u = nmp[x], v = nmp[y];
        enset.insert(std::make_pair(u, v));
        enset.insert(std::make_pair(v, u));
    }


    std::set<std::string> clique;
    long B = (1 << n);
    for(long p = 1; p < B; p++){
        std::vector<bool> bv = getBinaryVector(p);
        bool possible(true);
        for(int x = 0; x < bv.size(); x++){
            if(!possible){break;}
            if(!bv[x]){continue;}
            for(int y = x + 1; y < bv.size(); y++){
                if(!bv[y]){continue;}
                if(enset.count(std::make_pair(x, y))){possible = false; break;}
            }
        }

        if(possible){
            int cnt = countOnes(bv);
            if(cnt > clique.size()){
                clique.clear();
                for(int p = 0; p < bv.size(); p++){
                    if(!bv[p]){continue;}
                    clique.insert(nmv[p]);
                }
            }
        }
    }


    std::cout << clique.size() << std::endl;
    for(std::set<std::string>::iterator it = clique.begin(); it != clique.end(); it++){std::cout << (*it) << std::endl;}

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    long n, m; std::cin >> n >> m;
    std::vector<std::vector<std::pair<long, std::string> > > scores(m);

    for(long p = 0; p < n; p++){
        std::string name; long region; long score;
        std::cin >> name >> region >> score;
        scores[region - 1].push_back(std::pair<long, std::string>(score, name));
    }


    for(long p = 0; p < m; p++){
        sort(scores[p].begin(), scores[p].end());
        size_t n = scores[p].size();
        if(scores[p].size() > 2 && scores[p][n - 3].first >= scores[p][n - 2].first){std::cout << "?\n"; continue;}
        else if(scores[p].size() >= 2){std::cout << scores[p][n - 1].second << " " << scores[p][n - 2].second << std::endl;}
    }

    return 0;
}

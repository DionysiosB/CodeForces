#include <cstdio>
#include <vector>
#include <map>
#include <set>

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<long> colors(n + 1);
    std::map<long, std::set<long> > diversity;
    long minColor(1e6), maxSize(0);

    for(long p = 1; p <= n; p++){
        scanf("%ld", &colors[p]);
        if(colors[p] < minColor){minColor = colors[p];}
    }

    while(m--){
        long a, b; scanf("%ld %ld\n", &a, &b);
        if(colors[a] == colors[b]){continue;}
        if(diversity.count(colors[a]) > 0){diversity[colors[a]].insert(colors[b]);}
        else{
            std::set<long> temp; temp.insert(colors[b]); 
            diversity.insert(std::pair<long, std::set<long> >(colors[a], temp));
        }

        if(diversity.count(colors[b]) > 0){diversity[colors[b]].insert(colors[a]);}
        else{
            std::set<long> temp; temp.insert(colors[a]); 
            diversity.insert(std::pair<long, std::set<long> >(colors[b], temp));
        }
    }


    for(std::map<long, std::set<long> >::iterator mapIter = diversity.begin(); mapIter != diversity.end(); mapIter++){
        printf("%ld --> %ld\n", mapIter->first,  (mapIter->second).size());
        if(maxSize < (mapIter->second).size() || (maxSize == (mapIter->second).size() && minColor >= mapIter->first)){minColor = mapIter->first; maxSize = (mapIter->second).size();}
    }

    printf("%ld\n", minColor);

    return 0;
}

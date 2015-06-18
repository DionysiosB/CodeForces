#include <cstdio>
#include <vector>
#include <map>

int main(){

    long n; scanf("%ld\n", &n);

    std::vector<std::pair<long, long> > colors(n, std::pair<long, long>(0,0));
    std::map<long, long> homeCount;
    std::map<long, long> awayCount;

    for(int p = 0; p < n; p++){
        long homeColor, awayColor; scanf("%ld %ld\n", &homeColor, &awayColor);
        colors[p] = std::pair<long, long>(homeColor, awayColor);

        if(homeCount.find(homeColor) == homeCount.end()){homeCount.insert(std::pair<long, long>(homeColor, 1));}
        else{++homeCount[homeColor];}

        if(awayCount.find(awayColor) == awayCount.end()){awayCount.insert(std::pair<long, long>(awayColor, 1));}
        else{++awayCount[awayColor];}
    }


    for(int p = 0; p < n; p++){
        long clash = homeCount[colors[p].second];
        printf("%ld %ld\n", n - 1 + clash, n - 1 - clash);
    }


    return 0;
}

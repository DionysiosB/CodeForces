#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>

int main(){

    long n(0); scanf("%ld", &n);

    std::vector<std::pair<long, long>> events;
    for(long k = 0; k < n; k++){
        long pos(0), spit(0); scanf("%ld %ld", &pos, &spit);
        if(spit < 0){spit *= -1; pos -= spit;}
        events.push_back(std::pair<long,long>(pos,spit));
    }

    std::sort(events.begin(), events.end());

    bool mutual(0);
    for(long k = 0; k < n - 1; k++){if(events[k].first == events[k+1].first && events[k].second == events[k+1].second){mutual = 1; break;}}

    if(mutual){puts("YES");} else{puts("NO");}

    return 0;
}

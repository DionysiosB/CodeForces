#include <cstdio>
#include <vector>
#include <map>

struct cont{
    long start;
    long end;
    long count;
};

int main(){

    long n; scanf("%ld\n", &n);
    long ansStart(0), ansEnd(0), maxCount(1), minDist(1);
    std::map<long, cont> dets;
    for(int p = 0; p < n; p++){
        long t; scanf("%ld", &t);
        if(dets.count(t) > 0){
            dets[t].end = p;
            ++dets[t].count;
            if(dets[t].count > maxCount){maxCount = dets[t].count; ansStart = dets[t].start; ansEnd = dets[t].end; minDist = dets[t].end - dets[t].start;}
            else if(dets[t].count == maxCount && minDist > dets[t].end - dets[t].start){ansStart = dets[t].start; ansEnd = dets[t].end; minDist = dets[t].end - dets[t].start;}
        }
        else{cont c; c.start = p; c.end = p; c.count = 1; dets.insert(std::pair<long, cont>(t, c));}
    }


    if(maxCount > 1){printf("%ld %ld\n", 1 + ansStart,  1 + ansEnd);}
    else{puts("1 1");}

    return 0;
}

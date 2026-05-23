#include <cstdio>
#include <set>
#include <vector>

bool isClose(long x1,long y1,long x2,long y2,long r){
    if((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) <= r * r){return 1;}
    return 0;
}

int main(){

    long xa(0), ya(0), xb(0), yb(0); scanf("%ld %ld %ld %ld", &xa, &ya, &xb, &yb);

    long xmin(0), xmax(0), ymin(0), ymax(0);
    if(xa < xb){xmin = xa; xmax = xb;} else{xmin = xb; xmax = xa;}
    if(ya < yb){ymin = ya; ymax = yb;} else{ymin = yb; ymax = ya;}

    std::set<std::pair<long,long>> coldGenerals;
    std::set<std::pair<long,long>>::iterator myIter;

    for(long k = ymin; k <= ymax; k++){coldGenerals.insert(std::pair<long,long>(xmin,k));}
    for(long k = ymin; k <= ymax; k++){coldGenerals.insert(std::pair<long,long>(xmax,k));}
    for(long k = xmin; k <= xmax; k++){coldGenerals.insert(std::pair<long,long>(k,ymin));}
    for(long k = xmin; k <= xmax; k++){coldGenerals.insert(std::pair<long,long>(k,ymax));}

    std::vector<std::pair<long,long>> radiators;
    std::vector<long> radii;

    long numRadiators(0); scanf("%ld", &numRadiators);

    for(long k = 0; k < numRadiators; k++){
        long xtemp(0), ytemp(0), tempRadius(0); scanf("%ld %ld %ld", &xtemp, &ytemp, &tempRadius); 
        radiators.push_back(std::pair<long,long>(xtemp,ytemp));
        radii.push_back(tempRadius);
    }

    for(long k = 0; k < numRadiators; k++){
        myIter = coldGenerals.begin(); 
        while(myIter != coldGenerals.end()){
            if(isClose(myIter->first, myIter->second,radiators[k].first,radiators[k].second,radii[k])){coldGenerals.erase(myIter); myIter = coldGenerals.begin();}
            else{myIter++;}
        }
    }


    printf("%ld\n", coldGenerals.size());

    return 0;
}

#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    long n, c, d; scanf("%ld %ld %ld\n", &n, &c, &d);
    std::vector<std::pair<long, long> > cmixed, dmixed;
    for(long p = 0; p < n; p++){
        long beauty, cost; char paytype; 
        scanf("%ld %ld %c\n", &beauty, &cost, &paytype);
        if(paytype == 'C'){cmixed.push_back(std::make_pair(cost, beauty));}
        else if(paytype == 'D'){dmixed.push_back(std::make_pair(cost, beauty));}
    }

    sort(cmixed.begin(), cmixed.end());
    sort(dmixed.begin(), dmixed.end());

    std::vector<std::pair<long, long> > cf, df;
    if(cmixed.size() > 0){cf.push_back(cmixed[0]);}
    if(dmixed.size() > 0){df.push_back(dmixed[0]);}
    for(long p = 1; p < cmixed.size(); p++){if((cmixed[p - 1] == cmixed[p]) || (cmixed[p].second > cmixed[p - 1].second)){cf.push_back(cmixed[p]);}}
    for(long p = 1; p < dmixed.size(); p++){if((dmixed[p - 1] == dmixed[p]) || (dmixed[p].second > dmixed[p - 1].second)){df.push_back(dmixed[p]);}}

    long maxBeauty(0);
    long left(0), right(cf.size() - 1);
    while(left < right){
        if(cf[left].first + cf[right].first <= c){
            long beautySum = cf[left].second + cf[right].second;
            maxBeauty = (maxBeauty > beautySum) ? maxBeauty : beautySum;
            ++left;
        }
        else{--right;}
    }

    left = 0; right = df.size() - 1;
    while(left < right){
        if(df[left].first + df[right].first <= d){
            long beautySum = df[left].second + df[right].second;
            maxBeauty = (maxBeauty > beautySum) ? maxBeauty : beautySum;
            ++left;
        }
        else{--right;}
    }

    long bestCost(-1), bestDiam(-1);
    for(long p = cf.size() - 1; p >= 0; p--){if(cf[p].first <= c){bestCost = p; break;}}
    for(long p = df.size() - 1; p >= 0; p--){if(df[p].first <= d){bestDiam = p; break;}}
    long combBeauty(0);
    if(bestCost >= 0 && bestDiam >= 0){combBeauty = cf[bestCost].second + df[bestDiam].second;}
    maxBeauty = (maxBeauty > combBeauty) ? maxBeauty : combBeauty;

    printf("%ld\n", maxBeauty);

    return 0;
}

#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>

struct request{
    long id;
    long people;
    long sum;
};
struct table{
    long id;
    long capacity;
};

bool compareMoney(request first, request second){return first.sum > second.sum;}
bool compareSize(table first, table second){return first.capacity < second.capacity;}

int main(){

    long n(0); scanf("%ld", &n);
    request dummyReq; dummyReq.id = dummyReq.people = dummyReq.sum = 0;
    std::vector<request> reqVec(n , dummyReq); 
    for(long p = 0; p < n; p++){reqVec[p].id = p; scanf("%ld %ld", &reqVec[p].people, &reqVec[p].sum);}
    std::sort(reqVec.begin(), reqVec.end(), compareMoney);

    long k(0); scanf("%ld", &k);
    table dummyTab; dummyTab.id = 0; dummyTab.capacity = 0;
    std::vector<table> tabVec(k, dummyTab);
    for(long p = 0; p < k; p++){tabVec[p].id = p; scanf("%ld", &tabVec[p].capacity);}
    std::sort(tabVec.begin(), tabVec.end(), compareSize);

    bool *usedTable = new bool[n]; for(long p = 0; p < k; p++){usedTable[p] = 0;}
    long totalSum = 0;
    std::vector< std::pair<long, long> > accepted;

    for(long p = 0; p < n; p++){
        for(long q = 0; q < k; q++){
            if(usedTable[q]){continue;}
            if(tabVec[q].capacity < reqVec[p].people){continue;}
            usedTable[q] = 1;
            totalSum += reqVec[p].sum;
            accepted.push_back(std::pair<long, long>(1 + reqVec[p].id, 1 + tabVec[q].id));
            break;
        }
    }

    printf("%lu %ld\n", accepted.size() , totalSum);
    for(size_t p = 0; p < accepted.size(); p++){printf("%ld %ld\n", accepted[p].first, accepted[p].second);}

    return 0;
}

#include <cstdio>
#include <vector>
#include <iostream>

int main(){

    long n(0), m(0), x(0), y(0); scanf("%ld %ld %ld %ld\n", &n, &m, &x, &y);
    long *desired = new long[n];
    long *available = new long[m];

    for(int k = 0; k < n; k++){scanf("%ld", desired + k);}
    for(int k = 0; k < m; k++){scanf("%ld", available + k);}

    long person(0), vest(0), total(0);
    std::vector<std::pair<long,long>> matches;
    while(person < n && vest < m){
        if(available[vest] >= desired[person] - x && available[vest] <= desired[person] + y){matches.push_back(std::pair<long,long>(person + 1, vest + 1)); ++person; ++vest;} 
        else if(available[vest] < desired[person] - x){++vest;}
        else if(available[vest] > desired[person] + y){++person;} 
    }

    printf("%ld\n", matches.size());
    for(int k = 0; k < matches.size(); k++){printf("%ld %ld\n", matches[k].first, matches[k].second);}

    return 0;
}

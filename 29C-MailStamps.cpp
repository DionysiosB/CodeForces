#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <set>

int main(){

    long n; scanf("%ld", &n);
    std::map<long, std::vector<long> > r;
    std::map<long, int> num;

    for(long p = 0; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        if(r.count(x) == 0){r[x] = std::vector<long>(1, y);}
        else{r[x].push_back(y);}

        if(r.count(y) == 0){r[y] = std::vector<long>(1, x);}
        else{r[y].push_back(x);}

        if(num.count(x) == 0){num[x] = 1;} else{++num[x];}
        if(num.count(y) == 0){num[y] = 1;} else{++num[y];}
    }

    long city(-1);
    for(std::map<long, int>::iterator it = num.begin(); it != num.end(); it++){if(it->second == 1){city = it->first; break;}}

    printf("%ld ", city);
    std::set<long> been; been.insert(city);
    for(long p = 0; p < n; p++){
        std::vector<long> v = r[city];
        for(long q = 0; q < v.size(); q++){
            if(been.count(v[q]) > 0){continue;}
            else{city = v[q]; printf("%ld ", city); been.insert(city); break;}
        }
    }

    puts("");

    return 0;
}

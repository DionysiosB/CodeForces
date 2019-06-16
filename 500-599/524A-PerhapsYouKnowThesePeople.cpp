#include <cstdio>
#include <map>

int main() {

    long m, k; scanf("%ld %ld", &m, &k);
    std::map<long, std::map<long, long> > v;

    for(long p = 0; p < m; p++){
        long a, b; scanf("%ld %ld", &a, &b);
        v[a][b] = v[b][a] = 1;
    }

    for(auto& x: v){

        std::map<long, long> b;
        printf("%ld: ", x.first);
        long ie = x.second.size();
        for(auto& y: v){
            long c = 0;
            if(x.second.count(y.first) == 0 && x.first != y.first){
                for(auto& z: x.second){
                    if(y.second.count(z.first) > 0){
                        ++c;
                    }
                }
                if(100 * c / ie >= k){
                    b[y.first] = 1;
                }
            }

        }

        printf("%ld", b.size());
        for(auto& y: b){printf(" %ld", y.first);}
        puts("");
    }

    return 0;
}

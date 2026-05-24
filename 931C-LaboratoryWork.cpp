#include <cstdio>
#include <vector>
#include <map>
typedef long long ll;

int main(){

    long n; scanf("%ld", &n);
    std::map<long, long> m;
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++m[x];}

    std::vector<long> keys, values;
    for(std::map<long, long>::iterator it = m.begin(); it != m.end(); it++){
        keys.push_back(it->first);; values.push_back(it->second);
    }

    if(keys.size() == 2 && keys[1] - keys[0] > 1){
        --keys.back(); keys.push_back(1 + keys.back());
        long x = values.back(); values.back() = 0; values.push_back(x);
    }

    long same(n);
    if(keys.size() > 2){
        long ta = (values[0] < values[2]) ? values[0] : values[2];
        long tb = values[1] / 2;
        if(ta > tb){values[0] -= ta; values[1] += 2 * ta; values[2] -= ta;}
        else{values[0] += tb; values[1] -= 2 * tb; values[2] += tb;}
        same = n - 2 * ((ta > tb) ? ta : tb);
    }

    printf("%ld\n", same);
    for(long p = 0; p < keys.size(); p++){while(values[p]--){printf("%ld ", keys[p]);}}
    puts("");

    return 0;
}

#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n; scanf("%ld", &n);
    long a, b; scanf("%ld %ld", &a, &b);

    std::set<long> s;
    long d(2);
    while(d * d <= a){
        if(a % d == 0){s.insert(d); while(a % d == 0){a /= d;}}
        ++d;
    }
    if(a > 1){s.insert(a);}

    d = 2;
    while(d * d <= b){
        if(b % d == 0){s.insert(d); while(b % d == 0){b /= d;}}
        ++d;
    }
    if(b > 1){s.insert(b);}

    for(long p = 1; p < n; p++){
        scanf("%ld %ld", &a, &b);
        std::vector<long> v;
        for(std::set<long>::iterator it = s.begin(); it != s.end(); it++){
            d = *it; if((a % d) && (b % d)){v.push_back(d);}
        }

        for(long p = 0; p < v.size(); p++){s.erase(v[p]);}
    }


    if(s.size()){printf("%ld\n", *s.begin());}
    else{puts("-1");}

    return 0;
}

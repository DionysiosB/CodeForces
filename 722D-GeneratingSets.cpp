#include <cstdio>
#include <set>

int main(){

    long n; scanf("%ld", &n);
    std::set<long> a;
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); a.insert(x);}
    bool done(false);
    while(true){
        long x = *(--(a.end()));
        long rem = x;
        while(x > 0 && a.count(x)){x /= 2;}
        if(x > 0){a.erase(rem);a.insert(x);}
        else{break;}
    }

    for(std::set<long>::iterator it = a.begin(); it != a.end(); it++){printf("%ld ", *it);}
    puts("");

    return 0;
}

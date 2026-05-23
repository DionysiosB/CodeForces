#include <cstdio>
#include <set>

int main(){

    long a, m; scanf("%ld %ld", &a, &m);

    std::set<long> rem;
    rem.insert(a);

    bool forever = 0;
    while(true){
        a = (2 * a) % m;
        if(a == 0){forever = 0; break;}
        else if(a > 0 && rem.find(a) == rem.end()){rem.insert(a);}
        else{forever = 1; break;}
    }

    puts(forever ? "No" : "Yes");

    return 0;
}

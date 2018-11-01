#include <cstdio>
#include <set>

int main(){

    std::multiset<long> ms; ms.insert(0);

    long q; scanf("%ld\n", &q);
    while(q--){
        char cmd; long x; scanf("%c %ld\n", &cmd, &x);
        if(cmd == '+'){ms.insert(x);}
        else if(cmd == '-'){ms.erase(ms.find(x));}
        else{
            long cur = 0;
            for (int p = 30; p >= 0; p--){
                cur |= (~x) & (1 << p);
                std::multiset<long>::iterator it = ms.lower_bound(cur);
                if(it == ms.end() || (*it >> p) != (cur >> p)){cur ^= (1 << p);}
            }

            printf("%ld\n", cur^x);
        }
    }

    return 0;
}

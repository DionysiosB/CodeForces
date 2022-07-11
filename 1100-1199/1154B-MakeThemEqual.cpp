#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n; scanf("%ld", &n);
    std::set<long> s; for(long p = 0; p < n; p++){long x; scanf("%ld", &x); s.insert(x);}
    if(s.size() <= 1){puts("0");}
    else if(s.size() == 2){
        long a = *s.begin(); long b = *s.rbegin();
        if((b - a) % 2){printf("%ld\n", b - a);}
        else{printf("%ld\n", (b - a) / 2);}
    }
    else if(s.size() == 3){
        std::vector<long> a; 
        for(std::set<long>::iterator iter = s.begin(); iter != s.end(); iter++){a.push_back(*iter);}
        if((a[0] + a[2]) != 2 * a[1]){puts("-1");}
        else{printf("%ld\n", a[1] - a[0]);}
    }
    else{puts("-1");}

    return 0;
}

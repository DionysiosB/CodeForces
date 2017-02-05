#include <cstdio>
#include <set>

int main(){

    long n; scanf("%ld\n", &n);
    std::set<long> inside;
    long present(0), maxPresent(0);
    while(n--){
        char sign; long reg;
        scanf("%c %ld\n", &sign, &reg);
        if(sign == '+'){++present; inside.insert(reg);}
        if(sign == '-'){
            if(inside.count(reg) > 0){--present; inside.erase(reg);}
            else{++maxPresent;}
        }

        if(present > maxPresent){maxPresent = present;}
    }

    printf("%ld\n", maxPresent);

    return 0;
}

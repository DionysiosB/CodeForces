#include <cstdio>
#include <vector>

int main(){

    long h1, a1, c1; scanf("%ld %ld %ld", &h1, &a1, &c1);
    long h2, a2; scanf("%ld %ld", &h2, &a2);

    std::vector<bool> act;
    while(h2 > 0){
        if((a1 >= h2) || h1 > a2){act.push_back(1); h2 -= a1;}
        else{act.push_back(0); h1 += c1;}
        h1 -= a2;
    }

    printf("%ld\n", act.size());
    for(long p = 0; p < act.size(); p++){puts(act[p] ? "STRIKE" : "HEAL");}

    return 0;
}

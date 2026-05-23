#include <cstdio>
#include <set>

int main(){

    int n; scanf("%d\n", &n);
    std::set<int> in, out;
    long totalCost(0), cost(0);

    while(n--){
        int a, b, c; scanf("%d %d %d\n", &a, &b, &c);
        totalCost += c;
        if(in.count(a) || out.count(b)){cost += c; out.insert(a); in.insert(b);}
        else{in.insert(a); out.insert(b);}

    }

    if(totalCost - cost < cost){cost = totalCost - cost;}
    printf("%ld\n", cost);

    return 0;
}

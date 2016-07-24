#include <cstdio>
#include <set>

int main(){

    int n; scanf("%d\n", &n);
    std::set<int> first, second;
    long totalCost(0), current(0);

    while(n--){
        int a, b, c; scanf("%d %d %d\n", &a, &b, &c);
        totalCost += c;
        if(first.count(a) || second.count(b)){current += c; first.insert(b); second.insert(a);}
        else{first.insert(a); second.insert(b);}
    }

    if(totalCost - current < current){current = totalCost - current;}
    printf("%ld\n", current);

    return 0;
}

#include <cstdio>
#include <set>

int main(){

    std::set<long> s, middle;
    long n; scanf("%ld", &n);

    while(n--){
        long a; scanf("%ld", &a);
        std::set<long> temp; temp.insert(a);
        for(std::set<long>::iterator setIter = middle.begin(); setIter != middle.end(); setIter++){temp.insert(a | *setIter);}
        middle = temp;
        s.insert(middle.begin(), middle.end());
    }
    
    printf("%ld\n", s.size());

    return 0;
}

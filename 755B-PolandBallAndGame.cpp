#include <iostream>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, m; std::cin >> n >> m; 
    std::set<std::string> a;
    std::set<std::string> b;

    while(n--){std::string x; std::cin >> x; a.insert(x);}
    while(m--){std::string y; std::cin >> y; b.insert(y);}

    long common(0);
    for(std::set<std::string>::iterator setIter = a.begin(); setIter != a.end(); setIter++){
        if(b.count(*setIter) > 0){++common;}
    }

    long u = (common + 1) / 2 + (a.size() - common);
    long v = (common/2) + (b.size() - common);

    std::cout << ((u > v) ? "YES" : "NO") << std::endl;

    return 0;
}

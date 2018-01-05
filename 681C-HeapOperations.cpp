#include <iostream>
#include <vector>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<std::string> op;
    std::multiset<long> ms;
    for(long p = 0; p < n; p++){
        std::string s; std::cin >> s;
        if(s == "insert"){
            long x; std::cin >> x;
            ms.insert(x);
            op.push_back("insert " + std::to_string(x));
        }
        else if(s == "removeMin"){
            if(ms.empty()){ms.insert(0); op.push_back("insert 0");}
            ms.erase(ms.begin());
            op.push_back(s);
        }
        else if(s == "getMin"){
            long x; std::cin >> x;
            while(!ms.empty() && ((*ms.begin()) < x)){
                ms.erase(ms.begin());
                op.push_back("removeMin");
            }
            if(ms.empty() || x < (*ms.begin())){
                ms.insert(x);
                op.push_back("insert " + std::to_string(x));
            }

            op.push_back("getMin " + std::to_string(x));
        }
    }

    std::cout << op.size() << "\n";
    for(size_t p = 0; p < op.size(); p++){std::cout << op[p] << "\n";}

    return 0;
}

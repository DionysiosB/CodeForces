#include <iostream>
#include <vector>
 
int main(){
 
    long t; std::cin >> t;
    while(t--){
        std::string a, b; std::cin >> a >> b;
 
        std::string d(a); std::vector<long> w(a.size(), 0);
        char x = a[a.size() - 1]; w[w.size() - 1] = a.size() - 1;
        for(long p = d.size() - 2; p >= 0; p--){
            if(d[p] < x){x = d[p]; w[p] = p;}
            else{d[p] = x; w[p] = w[p + 1];}
        }
 
        bool sub(false), possible(false);
        for(long p = 0; p < b.size(); p++){
            if(b[p] < d[p]){possible = false; break;}
            else if(p >= a.size()){possible = true; break;}
            else if(!sub && d[p] < b[p]){
                sub = true;
                char c = a[p]; a[p] = d[p]; a[w[p]] = c;
                possible = true; break;
            }
            else if(!sub && d[p] == b[p] && a[p] > b[p]){
                sub = true;
                char c = a[p]; a[p] = d[p]; a[w[p]] = c;
            }
        }
 
        std::cout << (possible ? a : "---") << std::endl;
    }
 
    return 0;
}

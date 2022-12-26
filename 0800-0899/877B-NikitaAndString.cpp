#include <iostream>
#include <vector>

int main(){
    
    std::string s; std::cin >> s;
    long n = s.size();
    std::vector<long> va(n + 1, 0), vb(n + 1, 0);
    for(long p = 1; p <= n; p++){
        va[p] = va[p - 1] + (s[p - 1] == 'a');
        vb[p] = vb[p - 1] + (s[p - 1] == 'b');
    }
    
    long maxSize(0);
    for(long x = 0; x <= n; x++){
        for(long y = x; y <= n; y++){
            long totalSize = va[x] + (vb[y] - vb[x]) + (va[n] - va[y]); 
            maxSize = (maxSize > totalSize) ? maxSize : totalSize;
        }
    }
    
    std::cout << maxSize << std::endl;
    
    return 0;
}

#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<std::string> a(n);
    for(long p = 0; p < n; p++){std::cin >> a[p];}

    std::string prev = a[n - 1];
    for(long p = n - 2; p >= 0; p--){
        long index(0);
        while(index < a[p].size()){
            if(index >= prev.size()){break;}
            if(a[p][index] < prev[index]){index = a[p].size(); break;}
            if(a[p][index] > prev[index]){break;}
            ++index;
        }

        a[p] = a[p].substr(0, index);
        prev = a[p];
    }

    for(long p = 0; p < n; p++){std::cout << a[p] << std::endl;}

    return 0;
}

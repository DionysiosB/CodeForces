#include <iostream>
#include <vector>

int main(){

    int n; std::cin >> n;
    std::vector<long> a(n);
    std::vector<long> b(n);

    for(int p = 0; p < n; p++){std::cin >> a[p];}
    for(int p = 0; p < n; p++){std::cin >> b[p];}

    long res(0);
    for(int l = 0; l < n; l++){
        long currentA(0), currentB(0);
        for(int r = l; r < n; r++){
            currentA |= a[r]; currentB |= b[r]; 
            if(currentA + currentB > res){res = currentA + currentB;}
        }
    }

    std::cout << res << std::endl;

    return 0;
}

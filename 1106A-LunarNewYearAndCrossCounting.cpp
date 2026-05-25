#include <iostream>
#include <vector>

int main(){

    long n; std::cin >> n;
    std::vector<std::string> a(n); for(long p = 0; p < n; p++){std::cin >> a[p];}
    long cnt(0);
    for(long row = 1; row < n - 1; row++){
        for(long col = 1; col < n - 1; col++){
            if(a[row][col] == 'X' && a[row - 1][col - 1] == 'X' && a[row + 1][col + 1] == 'X' && a[row - 1][col + 1] == 'X' && a[row + 1][col - 1] == 'X'){++cnt;}
        }
    }

    printf("%ld\n", cnt);
    return 0;
}

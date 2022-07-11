#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<std::string> a(n); for(long p = 0; p < n; p++){std::cin >> a[p];}
    std::string ans("YES");
    for(long row = 0; row < n; row++){
        for(long col = 0; col < n; col++){
            if(a[row][col] == '#'){continue;}
            a[row][col] = '#';
            if(row + 1 < n && col > 0 && col + 1 < n && a[row + 1][col - 1] == '.' && a[row + 1][col] == '.' && a[row + 1][col + 1] == '.'){
                a[row + 1][col - 1] = a[row + 1][col] = a[row + 1][col + 1] = '#';
            }
            else{ans = "NO"; break;}

            if(row + 2 < n && a[row + 2][col] == '.'){a[row + 2][col] = '#';}
            else{ans = "NO"; break;}
        }
    }

    std::cout << ans << std::endl;

    return 0;
}

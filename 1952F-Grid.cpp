#include <iostream>
#include <vector>

int main(){

    const int B = 21;
    const int b = 4;
    std::ios_base::sync_with_stdio(false);
    std::vector<std::string> v(B);
    for(long row = 0; row < B; row++){std::cin >> v[row];}

    long mxcnt(0);
    for(long row = 0; row + b <= B; row++){
        for(long col = 0; col + b <= B; col++){
            long tst(0);
            for(long sr = 0; sr < b; sr++){for(long sc = 0; sc < b; sc++){tst += (v[row + sr][col + sc] - '0');}}
            mxcnt = (mxcnt > tst ? mxcnt : tst);
        }
    }

    std::cout << mxcnt << std::endl;
}

#include <iostream>
#include <vector>

int main(){

    long n, k; std::cin >> n >> k;
    std::vector<std::string> b(n); for(long p = 0; p < n; p++){std::cin >> b[p];}
    std::vector<std::vector<long> > d(n, std::vector<long>(n, 0));
    for(long row = 0; row < n; row++){
        for(long col = 0; col < n; col++){
            if(b[row][col] == '#'){continue;}

            if(row + k <= n){
                bool vp(true);
                for(long p = row; p < row + k; p++){if(b[p][col] == '#'){vp = false; break;}}
                for(long p = row; p < row + k; p++){d[p][col] += vp;}
            }


            if(col + k <= n){
                bool hp(true);
                for(long p = col; p < col + k; p++){if(b[row][p] == '#'){hp = false; break;}}
                for(long p = col; p < col + k; p++){d[row][p] += hp;}
            }


        }
    }

    long mx(0), mxr(0), mxc(0);
    for(long row = 0; row < n; row++){
        for(long col = 0; col < n; col++){
            if(d[row][col] > mx){mxr = row; mxc = col; mx = d[row][col];}
        }
    }

    printf("%ld %ld\n", mxr + 1, mxc + 1);

    return 0;
}

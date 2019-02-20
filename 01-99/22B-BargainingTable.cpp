#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    int n, m; std::cin >> n >> m;
    std::vector<std::string> rv(n); 
    for(int p = 0; p < n; p++){std::cin >> rv[p];}

    int maxPerim(0);
    for(int length = 1; length <= n; length++){
        for(int width = 1; width <= m; width++){
            for(int srow = 0; srow < n; srow++){
                if(srow + length > n){continue;}
                for(int scol = 0; scol < m; scol++){
                    if(scol + width > m){continue;}

                    bool possible(true);
                    for(int row = 0; row < length; row++){
                        if(!possible){break;}
                        for(int col = 0; col < width; col++){
                            if(rv[srow + row][scol + col] == '1'){possible = false; break;}
                        }
                    }

                    if(possible){
                        int perim = 2 * (length + width);
                        maxPerim = (maxPerim > perim) ? maxPerim : perim;
                    }
                }
            }
        }
    }

    printf("%d\n", maxPerim);

    return 0;
}

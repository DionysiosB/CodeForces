#include <iostream>
#include <vector>

long countViolas(std::vector<std::pair<int, int> > v, int x0, int x1, int y0, int y1){

    long res(0);
    for(int p = 0; p < v.size(); p++){
        res += (x0 <= v[p].first && v[p].first <= x1 && y0 <= v[p].second && v[p].second <= y1);
    }

    return res;
}


int main(){

    int r, c, n, k; std::cin >> r >> c >> n >> k;
    std::vector<std::pair<int, int> > violas(n);
    for(int p = 0; p < n; p++){std::cin >> violas[p].first >> violas[p].second;}

    long count(0);
    for(int xs = 1; xs <= r; xs++){
        for(int xf = xs; xf <= r; xf++){
            for(int ys = 1; ys <= c; ys++){
                for(int yf = ys; yf <= c; yf++){
                    if(countViolas(violas, xs, xf, ys, yf) >= k){++count;}
                }
            }
        }
    }

    std::cout << count << std::endl;

    return 0;
}

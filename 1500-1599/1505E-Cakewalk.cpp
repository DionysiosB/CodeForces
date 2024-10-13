#include <iostream>
#include <vector>

int main(){

    long h, w; std::cin >> h >> w;
    std::vector<std::string> b(h);
    for(long p = 0; p < h; p++){std::cin >> b[p];}

    long row(0), col(0), cnt(b[0][0] == '*');
    while(true){
        bool found(false);
        long mindist(1000), qrow(-1), qcol(-1);
        for(long rr = row; rr < h; rr++){
            for(long cc = col; cc < w; cc++){
                if(rr == row && cc == col){continue;}
                if(b[rr][cc] != '*'){continue;}
                found = true;
                long dist = (rr - row) + (cc - col);
                if(dist < mindist){mindist = dist; qrow = rr; qcol = cc;}
            }
        }

        if(!found){break;}
        ++cnt; 
        row = qrow; col = qcol;
    }

    std::cout << cnt << std::endl;

    return 0;
}

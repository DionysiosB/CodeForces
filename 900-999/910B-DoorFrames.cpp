#include <cstdio>
#include <vector>

std::vector<int> getVector(int x, int length){
    std::vector<int> res;
    for(int p = 0; p < length; p++){res.push_back(x % 2); x /= 2;}
    return res;
}

int countOnes(std::vector<int> x){
    int cnt(0);
    for(int p = 0; p < x.size(); p++){cnt += (x[p] == 1);}
    return cnt;
}

int main(){

    const int A = 4;
    const int B = 2;
    const int C = A + B;

    int n, a, b; scanf("%d %d %d", &n, &a, &b);
    int s(1); for(int p = 0; p < C; p++){s *= 2;}

    int minCnt(C + 1);
    for(int p = 1; p < s; p++){
        std::vector<int> vs = getVector(p, C);
        if(countOnes(vs) != A){continue;}

        int cnt(0), rem(0);
        for(int p = 0; p < vs.size(); p++){
            int u = vs[p] ? a : b;
            if(u > rem){++cnt; rem = n;}
            rem -= u;
        }

        minCnt = (minCnt < cnt) ? minCnt : cnt;
    }

    printf("%d\n", minCnt);

    return 0;
}

#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::vector<long> > f;
    std::vector<long> h;
    for(long p = 0; p < n; p++){
        long a; scanf("%ld", &a);
        if(h.size() <= 0 || a < h.back()){h.push_back(a); f.push_back(std::vector<long>(1, a));}
        else{
            long left(0), right(h.size() - 1), pos(h.size() - 1);
            while(left <= right){
                long mid = (left + right) / 2;
                if(h[mid] <= a){pos = mid; right = mid - 1;}
                else{left = left + 1;}
            }

            h[pos] = a;
            f[pos].push_back(a);
        }
    }

    for(long p = 0; p < f.size(); p++){for(long q = 0; q < f[p].size(); q++){printf("%ld ", f[p][q]);}; puts("");}

    return 0;
}

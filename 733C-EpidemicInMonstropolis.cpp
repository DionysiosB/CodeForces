#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    long sumBefore(0);
    std::vector<long> before(n); for(long p = 0; p < n; p++){scanf("%ld", &before[p]); sumBefore += before[p];}

    long k; scanf("%ld", &k);
    long sumAfter(0);
    std::vector<long> after(k); for(long p = 0; p < k; p++){scanf("%ld", &after[p]); sumAfter += after[p];}

    std::vector<std::pair<long, char> > f;

    bool possible(sumBefore == sumAfter);
    long count(0), indBefore(0), indAfter(0);

    while(possible && (indBefore < n) && (indAfter < k)){
        long w = after[indAfter++];
        std::vector<long> v; long sum(0);
        while((indBefore < n) && (sum < w)){
            long x = before[indBefore++];
            v.push_back(x); sum += x;
        }

        if(sum > w){possible = false; break;}
        ++count;
        if(v.size() == 1){continue;}
        long mx(-1), mxp(-1);
        for(long p = 0; p < v.size(); p++){
            if(v[p] > mx){
                if(p > 0 && v[p - 1] < v[p]){mx = v[p]; mxp = p;}
                if(p + 1 < v.size() && v[p] > v[p + 1]){mx = v[p]; mxp = p;}
            }
        }

        if(mx < 0){possible = false; break;}

        long mxpR(mxp);
        if(mxp > 0 && v[mxp - 1] <= v[mxp]){mxpR = mxp + 1; f.push_back(std::make_pair(mxp + (count - 1), 'R'));}

        for(long p = 0; p < v.size(); p++){
            if(p < mxp){f.push_back(std::make_pair((mxp - p) + (count - 1), 'L'));}
            else if(p == mxp || p == mxpR){continue;}
            else if(p > mxp){f.push_back(std::make_pair(count - 1, 'R'));}
        }
    }

    puts(possible ? "YES" : "NO");
    if(possible){for(long p = 0; p < f.size(); p++){printf("%ld %c\n", 1 + f[p].first, f[p].second);}}

    return 0;
}

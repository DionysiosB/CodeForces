#include<cstdio>
#include<vector>
#include<deque>
typedef long long ll;

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n), b(n);
    for(int p = 0; p < n; p++){scanf("%ld", &a[p]);}
    for(int p = 0; p < n; p++){scanf("%ld", &b[p]);}

    ll cnt(0);
    long left(0);
    std::deque<long> mxq , mnq;

    for(int p = 0; p < n; p++){
        while(!mxq.empty() && a[mxq.back()] <= a[p]){mxq.pop_back();}
        while(!mnq.empty() && b[mnq.back()] >= b[p]){mnq.pop_back();}
        mxq.push_back(p); mnq.push_back(p);
        while(left <= p && a[mxq.front()] > b[mnq.front()]){
            ++left;
            while(!mxq.empty() && mxq.front() < left){mxq.pop_front();}
            while(!mnq.empty() && mnq.front() < left){mnq.pop_front();}
        }

        if(!mxq.empty() && !mnq.empty() && a[mxq.front()] == b[mnq.front()]){cnt += (mxq.front() < mnq.front() ? mxq.front() : mnq.front()) - left  + 1;}
    }

    printf("%lld\n",cnt);
    return 0;
}

#include<iostream>
#include<algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin>>n;
        long mxp(-1e9), mip(1e9), mxm(-1e9), mim(1e9), mxx(-1e9), mix(1e9), mxy(-1e9), miy(1e9);
        for(long row = 0; row < n; row++){
            std::string s; std::cin >> s;
            for(long col = 0; col < n; col++){
                if(s[col] != '#'){continue;}
                mxx = std::max(row , mxx); mix = std::min(row , mix);
                mxy = std::max(col , mxy); miy = std::min(col , miy);
                mxp = std::max(row+col , mxp); mip = std::min(row+col , mip);
                mxm = std::max(row-col , mxm); mim = std::min(row-col , mim);
            }
        }

        if(mxx-mix <= 1 && mxy-miy <= 1 || mxp - mip <= 1|| mxm-mim <= 1){std::cout<<"YES" << std::endl;}
        else{std::cout << "NO" << std::endl;}

    }
}

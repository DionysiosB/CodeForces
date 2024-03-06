#include <iostream>

int main(){
    
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a, b; std::cin >> a >> b;
        long idx(0), cnt(0);
        while(idx < n){
            if(a[idx] != b[idx]){cnt += 2;}
            else if(a[idx] == '1' && b[idx] =='1'){
                if((idx + 1 < n) && (a[idx + 1] == '0') && (b[idx + 1] == '0')){cnt += 2; ++idx;}
            }
            else if(a[idx] == '0' && b[idx] =='0'){
                if(idx + 1 < n && a[idx + 1] == '1' && b[idx + 1] == '1'){cnt += 2; ++idx;}
                else{++cnt;}
            }

            ++idx;
        }

        std::cout << cnt << std::endl;
    }

}

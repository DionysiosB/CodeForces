#include <iostream>
 
int main(){
    
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a, b; std::cin >> a >> b;
        long zva(0), zvb(0), zda(0), zdb(0);
        for(size_t p = 0; p < n; p++){
            if(p % 2){
                zda += (a[p] == '0');
                zdb += (b[p] == '0');
            }
            else{
                zva += (a[p] == '0');
                zvb += (b[p] == '0');
            }
        }
        
        bool ans = ((zva + zdb) >= (n + 1) / 2) && (zda + zvb >= n / 2);
        std::cout << (ans ? "YES" : "NO") << std::endl;
    }
    
}

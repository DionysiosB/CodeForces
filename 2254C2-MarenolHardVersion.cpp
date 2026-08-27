#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
 
int main() {
    
    std::ios_base::sync_with_stdio(false);
    ll t; std::cin >> t;
    while(t--){
        ll n; std::cin >> n;
        std::string a, b; std::cin >> a >> b;
        std::vector<ll> vao, vae, vbo, vbe;
        for(int p = 0; p < n; p++){
            if(p % 2){
                if(a[p] == '1' && b[p] == '0'){vao.push_back(p);}
                else if(a[p] == '0' && b[p] == '1'){vbo.push_back(p);}
            }
            else{
                if(a[p] == '1' && b[p] == '0'){vae.push_back(p);}
                else if(a[p] == '0' && b[p] == '1'){vbe.push_back(p);}
            }
        }
        
        ll cnt(-1);
        if(vao.size() == vbo.size() && vae.size() == vbe.size()){
            cnt = 0;
            for(ll p = 0; p < vao.size(); p++){cnt += std::abs(vao[p] - vbo[p]);}
            for(ll p = 0; p < vae.size(); p++){cnt += std::abs(vae[p] - vbe[p]);}
            cnt /= 2;
        }
        
        std::cout << cnt << std::endl;
    }
 
}

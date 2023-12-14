#include <iostream>
 
int main(){
 
	std::ios_base::sync_with_stdio(false);
 
	long t; std::cin >> t;
	while(t--){
		long n; std::cin >> n;
		std::string s; std::cin >> s;
		bool ans(false);
		for(long p = 0; !ans && p < n; p++){
			if(s[p] == '0'){ans = true;}
		}
 
		std::cout << (ans ? "YES" : "NO") << std::endl;
	}
 
}

#include <iostream>
#include <vector>
 
int main(){
 
	std::ios_base::sync_with_stdio(false);
	long n; std::cin >> n;
	std::string s; std::cin >> s;
	long na(0), nb(0);
	for(long p = 0; p < s.size(); p++){
		if(s[p] == 'L'){++na;}
		else if(s[p] == 'O'){++nb;}
	}
 
	long ans(-1), x(0), y(0);
	for(long p = 0; ans < 0 && p + 1 < s.size(); p++){
		if(s[p] == 'L'){++x;}
		else if(s[p] == 'O'){++y;}
		if((x != na - x) && (y != nb - y)){ans = p + 1;}
	}
 
	std::cout << ans << std::endl;
 
}

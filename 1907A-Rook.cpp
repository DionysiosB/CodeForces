#include <iostream>

int main(){

	std::ios_base::sync_with_stdio(false);

	long t; std::cin >> t;
	while(t--){
		std::string s; std::cin >> s;
		for(char col = '1'; col <= '8'; col++){
			if(col != s[1]){std::cout << s[0] << col << std::endl;}
		}
		for(char row = 'a'; row <= 'h'; row++){
			if(row != s[0]){std::cout << row << s[1] << std::endl;}
		}
	}

}

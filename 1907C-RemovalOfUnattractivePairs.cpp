#include <iostream>
#include <vector>

int main(){

	std::ios_base::sync_with_stdio(false);

	long t; std::cin >> t;
	while(t--){
		std::string s; std::cin >> s;
		std::vector<long> smalls, caps;
		std::vector<bool> show(s.size(), true);

		for(long p = 0; p < s.size(); p++){
			if(s[p] == 'b'){
				show[p] = false;
				if(smalls.size() == 0){continue;}
				show[smalls.back()] = false; smalls.pop_back();
			}
			else if(s[p] == 'B'){
				show[p] = false;
				if(caps.size() == 0){continue;}
				show[caps.back()] = false; caps.pop_back();
			}
			else if(s[p] >= 'a' && s[p] <= 'z'){smalls.push_back(p);}
			else if(s[p] >= 'A' && s[p] <= 'Z'){caps.push_back(p);}
		}

		for(long p = 0; p < s.size(); p++){if(show[p]){std::cout << s[p];}}
		std::cout << std::endl;
	}

}

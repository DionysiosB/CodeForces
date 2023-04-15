#include <iostream>
 
int main() {
 
  std::ios_base::sync_with_stdio(false);
  long t; std::cin >> t;
  while (t--) {
    long n; char d; std::cin >> n >> d;
    std::string s; std::cin >> s;
    bool done(false);
    for(long p = 0; p < s.size(); p++){
      if(!done && s[p] < d){std::cout << d; done = true;}
      std::cout << s[p];
    }
    if(!done){std::cout << d;}
    std::cout << std::endl;
  }
  
}

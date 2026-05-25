#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::string s1,s2,s3;
    std::cin>>s1>>s2>>s3;
    if(s1[0]>s2[0]){std::swap(s1,s2);}
    if(s2[0]>s3[0]){std::swap(s2,s3);}
    if(s1[0]>s2[0]){std::swap(s1,s2);}

    if(s1[1]==s2[1] && s2[1]==s3[1] && ((s1[0]==s2[0] && s2[0]==s3[0]) || (s1[0]+1==s2[0] && s2[0]+1==s3[0]))){std::cout << 0 << std::endl;}
    else if((s1[1]==s2[1] && s2[0]-s1[0]<=2) || (s2[1]==s3[1] && s3[0]-s2[0]<=2) || (s1[1]==s3[1] && s3[0]-s1[0]<=2)){std::cout << 1 << std::endl;}
    else{std::cout << 2 << std::endl;}
    return 0;
}

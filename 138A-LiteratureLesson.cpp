#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

int main(){

    const int N = 4;
    long n, k; scanf("%ld %ld\n", &n, &k);
    std::string output = "aaaa";

    for(int p = 0; p < n; p++){
        std::vector<std::string> scheme(N, "");
        for(int q = 0; q < N; q++){
            std::string line; getline(std::cin, line);
            int count(0);
            for(int r = line.size() - 1; r >= 0; r--){
                scheme[q] += line[r];
                if(line[r] == 'a' || line[r] == 'e' || line[r] == 'i' || line[r] == 'o' || line[r] == 'u'){++count;}
                if(count >= k){break;}
            }
        }

        if(scheme[0].size() < k || scheme[1].size() < k || scheme[2].size() < k || scheme[3].size() < k){output = "NO"; break;}
        else if(scheme[0] == scheme[1] && scheme[1] == scheme[2] && scheme[2] == scheme[3]){continue;}
        else if(scheme[0] == scheme[1] && scheme[2] == scheme[3] && (output == "aaaa" || output == "aabb")){output = "aabb";}
        else if(scheme[0] == scheme[2] && scheme[1] == scheme[3] && (output == "aaaa" || output == "abab")){output = "abab";}
        else if(scheme[0] == scheme[3] && scheme[1] == scheme[2] && (output == "aaaa" || output == "abba")){output = "abba";}
        else{output = "NO"; break;}
    }

    std::cout << output << std::endl;

    return 0;
}

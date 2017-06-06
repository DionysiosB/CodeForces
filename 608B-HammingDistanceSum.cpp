#include <iostream>
#include <vector>

int main(){

    std::string a, b;
    getline(std::cin, a);
    getline(std::cin, b);

    long count[b.size()][2];
    if(b[0] == '0'){count[0][0] = 1; count[0][1] = 0;}
    else{count[0][0] = 0; count[0][1] = 1;}

    for(long p = 1; p < b.size(); p++){
        count[p][0] = count[p - 1][0] + (b[p] == '0');
        count[p][1] = count[p - 1][1] + (b[p] == '1');
    }

    int64_t res(count[b.size() - a.size()]['1' - a[0]]);  //Contribution from first digit

    for(long p = 1; p < a.size(); p++){
        int digit = a[p] - '0';
        int oppDigit = 1 - digit;
        long beforeStart = p - 1;
        long endingPos = b.size() - a.size() + p;
        res += count[endingPos][oppDigit] - count[beforeStart][oppDigit];
    }

    std::cout << res << std::endl;

    return 0;
}

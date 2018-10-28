#include <cstdio>
#include <iostream>
#include <string>

int main(){

    const int B = 10;

    long p(0), x(0); scanf("%ld %ld", &p, &x);

    std::string output("");
    for(int firstDigit = 1; firstDigit <= 9; firstDigit++){

        int currentDigit(firstDigit), carry(0);
        std::string test(p, '0'); test[p - 1] = '0' + currentDigit;

        for(int pos = p - 2; pos >= 0; pos--){
            long temp = x * currentDigit + carry;
            currentDigit = temp % B;
            carry = temp / B;
            test[pos] = '0' + currentDigit;
        }

        if(currentDigit > 0 && carry + x * currentDigit == firstDigit){output = test; break;}
    }

    if(output.size() > 0){std::cout << output << std::endl;}
    else{puts("Impossible");}

    return 0;
}

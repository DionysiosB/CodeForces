#include <cstdio>
#include <vector>

int main(){

    std::vector<int> digits;
    digits.push_back(2); digits.push_back(7); digits.push_back(2); digits.push_back(3); digits.push_back(3); digits.push_back(4); digits.push_back(2); digits.push_back(5); digits.push_back(1); digits.push_back(2);

    int input; scanf("%d\n", &input);
    int output = digits[input / 10] * digits[input % 10];
    printf("%d\n", output);

    return 0;
}

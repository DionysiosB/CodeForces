#include <cstdio>
#include <iostream>
using namespace std;


int main(){
    int n; scanf("%d\n", &n);
    string number; getline(cin, number);
    string output = "YES";
    int firstSum = 0, secondSum = 0;
    for(int k = 0; k < n/2; k++){
        if(number[k] != '4' && number[k] != '7'){output = "NO"; break;}
        if(number[n/2 + k] != '4' && number[n/2 + k] != '7'){output = "NO"; break;}
        firstSum += number[k] - '0'; secondSum += number[n/2 + k] - '0';
    }
    if(firstSum != secondSum){output = "NO";}
    cout << output << endl;
    return 0;
}

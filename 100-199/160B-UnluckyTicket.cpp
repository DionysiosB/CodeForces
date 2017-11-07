#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n; scanf("%d\n", &n);
    int *a = new int[n]; int *b = new int[n];
    string number; getline(cin, number);
    for(int k = 0; k < n; k++){a[k] = number[k] - '0'; b[k] = number[n + k] - '0';}
    sort(a, a+n); sort(b, b+n);
    string output = "YES";
    if(a[0] == b[0]){output = "NO";}
    else if(a[0] < b[0]){for(int k = 1; k < n; k++){if(a[k] >= b[k]){output = "NO"; break;}}}
    else if (a[0] > b[0]){for(int k = 1; k < n; k++){if(a[k] <= b[k]){output = "NO"; break;}}}
    cout << output << endl;
    return 0;
}

#include <cstdio>

int main(){

    long n(0), m(0); scanf("%ld %ld", &n, &m);
    long *array = new long[n + 1];
    array[0] = 0; for(int k = 1; k <= n; k++){scanf("%ld", array + k);}

    vector<long[3]> operations;
    vector<pair<long,long> elements;

    for(long k = 0; k < m; k++){
        int operation(0); scanf("%d", &operation);
        if(operation == 1){
            long index(0), value(0); scanf("%ld %ld", &index, &value);
            long array[3] = {1, index, value};
            operations.push_back(array);
        }
        else if (operation == 2){
            long value(0); scanf("%ld", &value);
            long array[3] = {2, index, 0};
            operations.push_back(array);
        }
        else if (operation == 3){
            long index(0); scanf("%ld", &index);
            long array[3] = {3, index, 0};
            operations.push_back(array);
            elements.push_back(pa
        }
    }
    return 0;
}

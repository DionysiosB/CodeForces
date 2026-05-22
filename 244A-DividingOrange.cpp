#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int numSegments, numKids; scanf("%d %d\n",&numSegments, &numKids);
    bool *state = new bool[numSegments * numKids + 1];
    for(int u = 1; u <= numSegments * numKids; ++u){state[u] = 0;}
    int temp = 0;  vector<int> wanted;
    for(int u = 0; u < numKids; ++u){scanf("%d",&temp); wanted.push_back(temp);state[temp] = 1;}

    int index = 0;
    for(int kid = 0; kid < numKids; ++kid){
        printf("%d",wanted[kid]);
        int segments = 1;
        while(segments < numSegments){
            ++index;
            if(!state[index]){++segments; printf(" %d",index);}
        }
        printf("\n");
    }
    return 0;
}

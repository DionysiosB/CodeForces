#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<std::pair<int, int> > tasks(n);

    for(int p = 0; p < n; p++){
        int temp; scanf("%d", &temp);
        tasks[p] = std::pair<int, int>(temp, 1 + p);
    }

    std::sort(tasks.begin(), tasks.end());

    int a = -1, b = -1;

    for(int p = 0; p < tasks.size() - 1; p++){
        if(tasks[p].first == tasks[p + 1].first){
            if(a < 0){a = p;}
            else{b = p; break;}
        }
    }

    if(b < 0){puts("NO");}
    else{
        puts("YES");
        for(int p = 0; p < tasks.size(); p++){printf("%d ", tasks[p].second);}; puts("");
        int temp; temp = tasks[a].second; tasks[a].second = tasks[a + 1].second; tasks[a + 1].second = temp;
        for(int p = 0; p < tasks.size(); p++){printf("%d ", tasks[p].second);} puts("");
        temp = tasks[b].second; tasks[b].second = tasks[b + 1].second; tasks[b + 1].second = temp;
        for(int p = 0; p < tasks.size(); p++){printf("%d ", tasks[p].second);} puts("");
    }

    return 0;
}

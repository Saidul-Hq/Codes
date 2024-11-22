#include <bits/stdc++.h>
using namespace std;

struct student{
    string nm;
    double cg;
};

bool cmp(student a, student b){
    if (a.cg != b.cg){
        return a.cg > b.cg;
    }
    else
        return a.nm < b.nm;
    
}

int main() {
    // int i,j, min;
        
    student st[3];
    for(int i= 0; i< 3; i++){
        cin >> st[i].cg;
        cin >> st[i].nm;
    }
    
  
    sort (st, st+3, cmp);
    for (int i = 0; i < 3; i++){
        cout << st[i].nm << st[i].cg << endl;
    }
    cout << endl;

    
    
}

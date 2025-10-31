
#include <bits/stdc++.h>
using namespace std;

struct student{
    string name;
    long long g1,g2,g3,g4,sum;



};
bool studentdifference(student g1,student g2){
    if(g1.sum == g2.sum){
            return g1.name < g2.name;

    }
    return g1.sum > g2.sum;
}
int main(){
  long long size;
  cin>>size;
  student st[size];

    for (int i = 0; i < size; i++) {
        cin >> st[i].name >> st[i].g1 >> st[i].g2 >> st[i].g3 >> st[i].g4;
        st[i].sum = st[i].g1 + st[i].g2 + st[i].g3 + st[i].g4;
    }
  sort(st,st+size,studentdifference);
   for (int i = 0; i < size; i++) {
        cout << st[i].name << " "<< st[i].g1 << " "<< st[i].g2 << " "<< st[i].g3 << " "<< st[i].g4 << "\n";
    }

  return 0;
    }

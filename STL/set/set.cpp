#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(6);
    s.insert(6);
s.insert(6);
s.insert(6);
s.insert(6);

  for(int i:s){
      cout<<i;
  }    
    return 0;
}
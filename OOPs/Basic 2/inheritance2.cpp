#include<iostream>
using namespace std;
class vehicle{
    public:
    string color;
    int max_speed;
};
class car:public vehicle{
    int num_gears;

};
class bicycle:public vehicle{
    bool is_foldable;
};
class truck:public vehicle{
    int max_weight;
};
int main(){
    
    return 0;
}
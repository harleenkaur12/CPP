#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        
        for (int j = 1; j <=i ; j++)
        {
            /* code */
            char ch='A'+i+j-2;
            cout<<ch;

        }
        cout<<endl;
        
    }
    

    return 0;
}
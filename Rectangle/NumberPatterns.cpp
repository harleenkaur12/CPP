// Always remember while creating rectangular patterns j<=n and when creating triangular patterns j<=i


#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0; i<=n; i++){
		for(int j=0;j<=n;j++){
			
			cout<<" * " ;
			
		}
		cout<<endl;
			
}
}
----------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1;j<=n;j++){
			
			cout<<j<<"  ";
			
		}
		cout<<endl;
			
}
}

----------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0; i<=n; i++){
		for(int j=0;j<=n;j++){   //for a rectangular pattern j<=n . for a trianguar pattern j<=i
			
			cout<<n;
			
		}
		cout<<endl;
			
}
}
----------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	int i=1;
	for(i=1; i<=n;i++){
	    for(int j=1;j<=n;j++){
	        cout<<i;
	        
	    }
	    cout<<endl;
	}

}
-------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){ 
		for(int j=1;j<=n;j++){
			
			cout<<n- j+1<<"  "; //FOR PRINTING NUMBERS IN REVERSE FASHION
			
		}
		cout<<endl;
			
}
}
-----------------------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int count=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<count<<"  "; //FOR PRINTING NUMBERS IN A SEQUENCE
			count=count+1;
		}
		cout<<endl;
	}
	
}





























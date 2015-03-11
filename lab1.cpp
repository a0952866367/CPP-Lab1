#include<iostream>
using namespace std;
int main(){

	int n;
	cout<<"Please enter a number:";
	cin>>n;

	do{
		cout<<n<<" ";	
		if( n==1 ){
			return 0;
		}
		else if( (n%2)!=0 ){
			n = 3*n+1;
		}
		else{
			n = n/2;
		}
		if( n==1 ){
			cout<<"1"<<"\n";
		}
	}while( n!=1 );
}

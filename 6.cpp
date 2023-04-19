#include<iostream>

using namespace std;

int main(){
	
	int a;
	cout<<"enter your age: ";
	cin>>a;
	
	try{
		
		if(a>=18){
			cout<<"able to vote";
			
		}
		else{
			throw a;
		}
		
		
	}
	catch(int a){
		
		cout<<"unable to vote";
		
		
	}
	
	

	return 0;
}

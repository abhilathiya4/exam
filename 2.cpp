//2. WAP to find sum of all three number’s cubes byimplementing single level inheritance:
//Class X->Class Y:
//- Class X has following members: a, b & c attributes in integer data type
//- Class Y has following members: setData() and getData() methods.



#include<iostream>

using namespace std;

class X{
	
	public:
		int a;
		int b;
		int c;

};

class Y : public X {
	
	
	
	void setData(){
		
		cout<<"enter value of a :";
		cin>>a;
		cout<<"enter value of b :";
		cin>>b;
		cout<<"enter value of c :";
		cin>>c;
		
	}
	
	void getData(){
		
		cout<<(a*a*a)+(b*b*b)+(c*c*c);	
			
	}
	
};


int main(){
	
	Y o1;
	o1.setData();
	o1.getData();
	
	
	
	return 0;
}

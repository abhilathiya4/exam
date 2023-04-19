#include<iostream>

using namespace std;


class math{
	
	public:
		
		int a,b,c;
		
		math operator +(math n){
			
			math temp;
				temp.a= a-n.a;
				temp.b= b-n.b;
			return temp;
		}
};
int main(){
	
	math o1;
	
	
	
	
}

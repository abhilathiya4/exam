//3. WAP to print rate of interests of different banks using hierarchical inheritance:
//- Class RBI -> Class SBI
//- Class RBI -> Class BOB
//- Class RBI -> Class ICICI
//inherit rate attribute and getROI() method in all child classes.



#include<iostream>

using namespace std;

class RBI {
	
	public:
		int r = 10;
	
};

class SBI : public RBI{
	
	public :
		int r2;
		void get_ROI(){
			cout<<"enter SBI rate : ";
			cin>>r2;
			
			cout<<"SBI RATE : "<<r2<<"  RBI rate : "<<r<<endl;
			
		}
		
};

class BOB : public RBI{
	
	public :
		int r3;
		void get_ROI(){
			cout<<"enter BOB rate : ";
			cin>>r3;
			
			cout<<"BOB RATE : "<<r3<<"  RBI rate : "<<r<<endl;
			
		}
		
};

class ICICI : public RBI{
	
	public :
		int r4;
			void get_ROI(){
			cout<<"enter ICICI rate : ";
			cin>>r4;
			
			cout<<"ICICI RATE : "<<r4<<"  RBI rate : "<<r<<endl;
			
		}
		
};



int main(){
	
	SBI r1;
	r1.get_ROI();

	
	BOB r2;
	r2.get_ROI();
	
	ICICI r3;
	r3.get_ROI();
	
	
	

	return 0;
}

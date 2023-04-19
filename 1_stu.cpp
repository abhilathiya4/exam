

#include<iostream>

using namespace std;

class student{
	private:
		int stu_id;
		char stu_name[50];
		int stu_age;
		char stu_course[50];
		
	public:
//		void setter();
//		void getter();
		
		void setter(){
			
			cout<<"enter students id : ";
			cin>>stu_id;
			
			cout<<"enter students name : ";
			cin>>stu_name;
			
			cout<<"enter students age : ";
			cin>>stu_age;
			
			cout<<"enter students course : ";
			cin>>stu_course;
			
		};
		
	void getter(){
			cout<<stu_id<<endl;
			cout<<stu_name<<endl;
			cout<<stu_age<<endl;
			cout<<stu_course<<endl;
			
			};
		
	
}; 
int main(){
	
	student o1,o2;
	
	cout<<"enter detail of student 1"<<endl;
	
	o1.setter();
	o1.getter();
	cout<<"enter detail of student 2"<<endl;
	o2.setter();
	o2.getter();
	
	
	
	
	return 0;
}

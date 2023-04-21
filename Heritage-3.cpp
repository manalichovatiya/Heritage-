#include <iostream>
#include <string>
using namespace std;

class a{
	private:
		int id;
		char name[100];
		char role[100];
		int salary;

		public:
	void display(){
		cout<<"Enter employee id :  ";
		cin>>id;
		cout<<"Enter employee name :  ";
		cin>>name;
		cout<<"Enter employee role :  ";
		cin>>role;
		cout<<"Enter employee salary :  ";
		cin>>salary;
		cout<<endl<<"employee id : "<<id;
		cout<<endl<<"employee name : "<<name;
		cout<<endl<<"employee id : "<<role;
		cout<<endl<<"employee name : "<<salary<<endl;
	}
};
class b{
	private:
		int experience;
		char comp_name[100];
		char address[100];
		char email[100];
		int contact;
	public:
		void display(){
		cout<<endl<<"Enter employee experience :  ";
		cin>>experience;
		cout<<"Enter employee comp_name :  ";
		cin>>comp_name;
		cout<<"Enter employee address :  ";
		cin>>address;
		cout<<"Enter employee email :  ";
		cin>>email;
		cout<<"Enter employee contact :  ";
		cin>>contact;
		cout<<endl<<"employee experience : "<<experience;
		cout<<endl<<"employee comp_name : "<<comp_name;
		cout<<endl<<"employee address : "<<address;
		cout<<endl<<"employee email : "<<email;
		cout<<endl<<"employee contact5 : "<<contact;
	}
};
class c:public a,public b{
};

int main(){

	c obj;
	obj.a::display();
	obj.b::display();

	return 0;
}

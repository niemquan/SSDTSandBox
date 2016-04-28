#include <iostream>

using namespace std;

class person
{
public:
	string GetName(){
		return name;
	}
	
	void SetName(string inputName){
		name = inputName;
	}
	
private: 
	string name;
	
}


int main(){
	cout<<"Hello world"<<endl;
	return 0;
}





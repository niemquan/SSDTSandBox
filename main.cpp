#include <iostream>

using namespace std;

class person{
	
	private string name;
	public string GetName(){
		return name;
	}
	
	public void SetName(string inputName){
		name = inputName;
	}
}


int main(){
	cout<<"Hello world"<<endl;
	return 0;
}





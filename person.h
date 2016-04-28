#include <iostream>
#include <stdio.h>

using namespace std;

class Person{
private:
	string name;
	int age;

public:
	void SetName(string inputName){
		name = inputName;
	}

	string GetName(){
		return name;
	}

	void SetAge(string inputAge){
		age = inputAge;
	}

	void GetAge(){
		return age;
	}
};
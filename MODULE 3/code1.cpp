/*
Date: 23/05/22
Module 4, Program 1
*/


#include <bits/stdc++.h>
using namespace std;

class player{
private:
	char name[10];
	int age,runs,hi,lo,tests,avg;

public:

    player(){
        strcpy(name,"");
        age = 33;
        runs = 1003;
        hi = 4.9;
        lo = 5;
        tests = 10;
        avg = 5.6;
    }

	void getData(){
		cout<<"Enter Player Name: ";
		cin>>name;
		cout<<"Enter Player Age: ";
		cin>>age;
		cout<<"Enter Run: ";
		cin>>runs;
		cout<<"Enter Highest Score: ";
		cin>>hi;
		cout<<"Enter Lowest Score: ";
		cin>>lo;
		cout<<"Enter Total Test Matches: ";
		cin>>tests;
	}
	
	void dispData(){
		cout<<endl<<endl;
		cout<<"Player Name	: "<<name<<endl;
		cout<<"Age			: "<<age<<endl<<endl;
		cout<<" ----Analytics---- "<<endl;
		cout<<"Runs       	: "<<runs<<endl;
		cout<<"Highest Score   : "<<hi<<endl;
		cout<<"Lowest Score    : "<<lo<<endl;
		cout<<"Total Tests	: "<<tests<<endl;
		cout<<"Average		: "<<avg<<endl;
	}
	
	void calcAvg(){
		avg = runs / float(tests);
	}
	
	~player(){
	    cout << "Obj Destroyed..\n";
	}
};


int main(){
	player p1;
	p1.getData();
	p1.calcAvg();
	p1.dispData();
	
	cout << "\n\n";
	return 0;
}

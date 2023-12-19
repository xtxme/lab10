#include<iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char A,B,C,D,F;
	string grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.";
	do{
		cout << "Student [" << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == A) // if grade is A
		{
			count [1] += 1;
		}	
		if (grade == B)
		{
			count [2] += 1;
		}
		
		}else if(true) // if grade is B
			//Do something
		//and so on ... for grade = C, D, F	
		}else{ // grade is wrong input
			//Do something
		} 
	}while(true);
	
	
	cout << "In total ? students.";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}

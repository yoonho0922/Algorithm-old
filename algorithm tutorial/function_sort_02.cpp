#include <iostream>
#include <algorithm>

using namespace std;

//class Student {
//public:
//	string name;
//	int score;
//	Student(string name, int score){
//		this -> name = name;
//		this -> score = score;
//	}
//	
//	bool operator <(Student & student) {
//		return this->score < student.score;
//	}
//};

class Student{
public:
	string name;
	int score;
	Student(string name, int score){
		this->name = name;
		this->score = score;  
	}
	
	bool operator <(Student &student){
		return this->score < student.score;
	}
};

bool compare(int a, int b){
	return a>b;
}


int main(void){
   Student students[] = {
      Student("������", 93),
      Student("����", 90),
      Student("������", 97)
   };
   sort(students, students + 3);
   for(int i = 0; i < 3; i++){
      cout << students[i].name << ' ';
   }
}

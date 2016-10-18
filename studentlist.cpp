#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

void addname();
void printname();
void deletename();

struct Student {
  char firstname[20];
  char lastname[20];
  int id;
  float gpa;
};



int main(){
  char start[10];
  cout << "What would you like to do?" << endl;
  cout << "'add' to add a student into the list, 'print' to see the list, 'delete' if you want to remove a name" << endl;
  cin >> start;
  if(strcmp(start, "add") == 0){
    addname();
  }


  return 0;
}

void addname(){
  Student i;
  cout << "What is your student's first name?" << endl;
  cin >> i.firstname;
  cout << "What is his last name?" << endl;
  cin >> i.lastname;
  cout << "What is his student ID?" << endl;
  cin >> i.id;
  cout << "What is his GPA?" << endl;
  cin >> i.gpa;
  cout << "His name is " << i.firstname << " " << i.lastname << endl;
  cout << "His ID is " << i.id << " and his GPA is " << i.gpa << endl;
}


void printname(){
}


void deletename(){
}

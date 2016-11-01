//Student List by Austin Chang with the aid of Danilla Vanilla. Period7
//Input name, GPA, and ID and then pull it out again
//11/1/2016

#include <iostream>
#include <vector>
#include <string.h>
#include<iomanip>

using namespace std;

struct Student {//creating the struct
  char firstname[20];
  char lastname[20];
  char id[8];
  double gpa;
};
void addname(vector<Student*>*list); //initializing the method
void printname(vector<Student*>*list);
void deletename(vector<Student*>*list);


int main(){

  vector<Student*>*list = new vector<Student*>();//heap
  cout << "Enter a number" << endl;
 
  char running[15];
  bool doingstuff = true;
  while(doingstuff == true){
    char start[10];
    cout << "What would you like to do?" << endl;
    cout << "'add' to add a student into the list, 'print' to see the list, 'delete' if you want to remove a name" << endl;
    cin >> start;
    if(strcmp(start, "add") == 0){//which way?
      addname(list);
    }
    else if(strcmp(start, "print") == 0){
      printname(list);
    }
    else if(strcmp(start, "delete") == 0){
      deletename(list);
    }
    cin.ignore();
    cout << "is there anything else you'd like to do (yes/no)" << endl;
    cin >> running;
    if(strcmp(running, "yes") != 0){
      doingstuff = false;
    }
  }
}

void addname(vector<Student*>*list){
  Student* i = new Student;
  cout << "What is your student's first name?" << endl;
  cin >> i->firstname;
  cout << "What is his last name?" << endl;
  cin >> i->lastname;
  cout << "What is his student ID?" << endl;
  cin >> i->id;
  cout << "What is his GPA?" << endl;
  cin >> i->gpa;
  cout << "His name is " << i->firstname << " " << i->lastname << endl;
  cout << "His ID is " << i->id << " and his GPA is " << setprecision(2) << fixed << i->gpa << endl;
  list->push_back(i);
}


void printname(vector<Student*>*list){
  
  for(vector<Student*>::iterator it = (*list).begin(); it != (*list).end(); ++it){
    cout << "Student Name: " << (*it)->firstname << " " << (*it)->lastname << endl;
    cout << setprecision(2) << fixed << "GPA: " << (*it)->gpa << endl;
    cout << "ID: " << (*it)->id << endl;

  }
}


void deletename(vector<Student*>*list){
  char iddelete[8];
  int counter;
  cout << "Give the ID of the student you would like to remove from this list" << endl;
  cin >> iddelete;
  
  for(vector<Student*>::iterator it = (*list).begin(); it != (*list).end(); ++it, counter++){
    if(strcmp(iddelete, ((*it)->id)) == 0){
      list->erase(it);break;
    }
  }
}

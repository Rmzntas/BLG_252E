/* @Author
* Student Name: Ramazan Taş
*/

#include<iostream>
#include<string>
#include"university.h"

using namespace std;

Student::Student (string in_name, float in_gpa, float in_gre, float in_toefl){  //constructor
  
    name = in_name;         
    GPA = in_gpa;
    GRE = in_gre;
    TOEFL = in_toefl;

    cout<<name<< " logged in to the system."<<endl;
};

 Student::Student(const Student& original){  //Copy Constructor
    
    name = original.name;
    GPA = original.GPA;
    GRE = original.GRE;
    TOEFL = original.TOEFL;

     cout<<name<< " logged in to the system."<<endl;
 }

 void Student::set_name(string new_name){   //name setter
    name = new_name;
 }

 Student::~Student(){       //destructor of student objects with printing how many applications they did
    cout<<name<<" logged out of the system with " << num_applications << " application(s)."<<endl;
 }

    // getters for evaluate_student method of University Class (these getter methods are using in evaluate_student method)

 string Student::get_name() const{
   return name;
 };

 float Student::get_gpa() const{
   return GPA;
 }

 float Student::get_gre() const{
   return GRE;
 }

 float Student::get_toefl() const{
   return TOEFL;
 }

 int Student::get_applications() const{  //getter of number of applications (using in destructors)
   return num_applications;
 }

 void Student::increase_applications() const{  // increase number of applications 
   num_applications++;
 }

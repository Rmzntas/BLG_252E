/* @Author
* Student Name: Ramazan Taş
*/

#include<iostream>
#include<string>
#include "university.h"
using namespace std;

// Constructor with country parametre
University::University(string in_name, float in_w_gpa, float in_w_gre, float in_w_toefl, float in_bias,string in_country){
    name = in_name;
    w_gpa = in_w_gpa;
    w_gre = in_w_gre;
    w_toefl = in_w_toefl;
    bias = in_bias;
    country = in_country;
};

//Constuctor without country parametre
University::University(string in_name, float in_w_gpa, float in_w_gre, float in_w_toefl, float in_bias){
    
    name = in_name;
    w_gpa = in_w_gpa;
    w_gre = in_w_gre;
    w_toefl = in_w_toefl;
    bias = in_bias;
    
}

//Evaluating student is admitted or rejected (for constant student object)
void University::evaluate_student(const Student& student ) const{
    double z {};
    z = w_gpa* student.get_gpa() + w_gre* student.get_gre() + w_toefl* student.get_toefl()+ bias;

    if (z>=0)
        cout<< student.get_name()<< " is admitted to "<<name<<"."<<endl;
    else
        cout<< student.get_name()<< " is rejected from "<<name<<"."<<endl;

    student.increase_applications();    //increasing num of applications
}

//Evaluating student is admitted or rejected 
void University::evaluate_student(Student& student) {
    double z {};
    z = w_gpa* student.get_gpa() + w_gre* student.get_gre() + w_toefl* student.get_toefl()+ bias;

    if (z>=0)
        cout<< student.get_name()<< " is admitted to "<<name<<"."<<endl;
    else
        cout<< student.get_name()<< " is rejected from "<<name<<"."<<endl;

    student.increase_applications();    //increasing num of applications
}
/* @Author
* Student Name: Ramazan Taş
*/


#include<iostream>
#include "student.h"
#include <string>
using namespace std;



class University{
    private:
        string name{};          //name is initialized to empty string
        float w_gpa;            //weight of gpa are not initialized (random)
        float w_gre;            //weight of gre are not initialized (random)
        float w_toefl;          //weight of toefl are not initialized (random)
        float bias;             //bias are not initialized (random)
        string country{};       //name is initialized to empty string

    public:
        
        University(string, float, float, float, float);             //Constructor with parametre: Name, weight of gpa,weight of gre, weight of toefl, bias.
        University(string, float, float, float, float, string);    //Constructor with country parametre at the end

        void evaluate_student(const Student&) const ;        //Evaluating student rejected or admitted to university (this method for constant student objects)
        void evaluate_student(Student&);                     //Evaluating student rejected or admitted to university

};



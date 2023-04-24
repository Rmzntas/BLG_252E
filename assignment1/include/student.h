/* @Author
* Student Name: Ramazan Taş
*/

#include <iostream>
#include <string>
using namespace std;


class Student {
         
    private:  

        std::string name {};                // initializing empty string
        float GPA {};                       // it is initialized to zero 
        float GRE {};                       // it is initialized to zero 
        float TOEFL {};                     // it is initialized to zero 
        mutable int num_applications {};    // it is initialized to zero 
    
    public:
        Student(string , float, float, float);   //Constructor, parametres are: Name, gpa,gre,toefl.
        Student(const Student& );                //Copy Constructor
        ~Student();                              //Destructor of object
        
        // getters for evaluate_student method
        string get_name() const;
        float get_gpa() const;
        float get_gre() const;
        float get_toefl() const;

        int get_applications() const;  //getter of number of applications
        

        void increase_applications() const;   //method increase the number of applications  (const for constant students for example student1 in main)
        void set_name(string);                //name setter method, getting new name as parametre

};

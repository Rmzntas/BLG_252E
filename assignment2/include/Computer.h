/* @Author
 * Name:  Ramazan Taş
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

class ALU{
    public:
        ALU(int);
        int add(int,int) const;      // adding two integers
        int subtract(int,int) const;  //subtraction of two integers
        int multiply(int,int) const;  //multiplication of two integers
    
    private:
        int numPerCores;


};

class CUDA{
    public:
        CUDA(int);
        string render() const;      //rendering video  (string)
        string trainModel() const;  //training aiModel (string)
    
    private:
        int numCores;

   
};

class CPU {
    public:
        CPU(int);   //int parametre is number of alu core
        int execute(string) const;   //parametre is operation name

    private:
        ALU alu;    //CPU's alu


};


class GPU {
    public:
        GPU(int);    //int parametre is number of Cuda core
        string execute(string) const;   //parametre is operation name 
    
    private:
        CUDA cuda;   //GPU's Cuda



};


class Computer {
    public:
        Computer();
        void operator+(CPU);         //attaching CPU with computer
        void operator+(GPU);         //attaching GPU with computer
        void execute(std::string)const;   // parameter is operation name

    private:
        CPU* attachedCPU = NULL;    //atteched CPU pointer initializing as NULL
        GPU* attachedGPU = NULL;    //atteched GPU pointer initializing as NULL

};

/* @Author
 * Name:  Ramazan Taş
 */

#include <iostream>
#include "Computer.h"
#include <string>

Computer::Computer(){
    cout<< "Computer is ready"<<endl;
};

void Computer::operator+(CPU in_cpu){
    if (attachedCPU ==NULL){                //if there is no attached CPU, Cpu will be attached
        attachedCPU = &in_cpu;
        cout<<"CPU is attached"<<endl;
    }
    else{                                   // if there is attached CPU, it will not attach new one
        cout<<"There is already a CPU"<<endl;
    }
};

void Computer::operator+(GPU in_gpu){       //if there is no attached GPU, Cpu will be attached
    if (attachedGPU ==NULL){
        attachedGPU = &in_gpu;
        cout<<"GPU is attached"<<endl;
    }
    else{                                   // if there is attached GPU, it will not attach new one
        cout<<"There is already a GPU"<<endl;
    }
};

void Computer::execute(string operation)const{           //execute operations
    if(operation == "add" || operation =="subtract" || operation == "multiply"){     // if operation will handle in CPU, CPU's execute method will called
        cout<<attachedCPU->execute(operation)<<endl;
        
    }
    else if (operation == "render" || operation == "trainModel"){                   // else if operation will handle in GPU, GPU's execute method will called
        cout<<attachedGPU->execute(operation)<<endl;
    }
    else{
        // non of them there is no example for this so it is empty
        //cout<<"ERROR";
    }
};

CPU::CPU(int alu_cores): alu(alu_cores){    //constructor of CPU ,initializing alu's number of core by constructor of alu
    cout<<"CPU is ready"<<endl;
};

int CPU::execute(string op) const{                //2 integers will be taken from the user and then the alu's method of the operation will be called and return.
    int num1,num2;  
    cout<<"Enter two integers"<<endl;
    cin>>num1;
    cin>>num2;
    if (op == "add")
        return alu.add(num1,num2);
    else if (op =="subtract")
        return alu.subtract(num1,num2);
    else
        return alu.multiply(num1,num2);
};

GPU::GPU(int cuda_core): cuda(cuda_core){   //constructor of GPU, initializing number of Cuda's core
    cout<<"GPU is ready"<<endl;
};

string GPU::execute(string op) const{             //cuda's method of the operation will be called and return. 
    if(op=="render")
        return cuda.render();
    else
        return cuda.trainModel(); 
}

ALU::ALU(int in_cores){                     // int parametre is number per Cores
    numPerCores = in_cores;
    cout<<"ALU is ready"<<endl;
    //cout<<numPerCores<<endl;
};

int ALU::add(int n1, int n2) const{               //adding 2 integer
    return n1+n2;
};

int ALU::subtract(int n1, int n2) const{          //subtracting 2 integer
    return n1-n2;
};

int ALU::multiply(int n1,int n2) const{           //multiplication of two integers
    return n1*n2;
};

CUDA::CUDA(int in_core){                    //int parametre is num of cores
    numCores = in_core;
    cout<<"CUDA is ready"<<endl;
    //cout<<numCores<<endl;
};

string CUDA::render() const{                      //returning render string
    return "Video is rendered";
};

string CUDA::trainModel()const{                  //returning AI training string
    return "AI Model is trained";
}
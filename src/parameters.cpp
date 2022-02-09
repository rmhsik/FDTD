#include <iostream>
#include <cmath>
#include "parameters.h"

Parameters::Parameters(){
    xmin = -100;
    xmax = 100;
    nx = 1000;
    tmax = 1000;
    nt = 3000;
    dt = tmax/nt;
    dx = (xmax-xmin)/nx;
    cdtds = C*dt/dx; 

    E0 = 0.067;
    w0 = 0.057;
    tmax_env = 4*2*M_PI/w0;
}


void Parameters::print(){
    std::cout<<" Parameters:"<<std::endl;
    std::cout<<"----------------------"<<std::endl;
    std::cout<<"\txmin: "<<xmin<<std::endl;
    std::cout<<"\txmax: "<<xmax<<std::endl;
    std::cout<<"\tnx: "<<nx<<std::endl;
    std::cout<<"\ttmax: "<<tmax<<std::endl;
    std::cout<<"\tcdtds: "<<cdtds<<std::endl;
    std::cout<<"\tE0: "<<E0<<std::endl;
    std::cout<<"\tw0: "<<w0<<std::endl;
    std::cout<<"\ttmax_env: "<<tmax_env<<std::endl;
}

void Parameters::check(){
    if(cdtds > 1.0){
        std::cout<<"Error Courant criteria not fulfilled."<<std::cout;
    }
}



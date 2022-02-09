#ifndef GRID_H
#define GRID_H

#include "parameters.h"

class Grid{
    private:
        Parameters *_p;
        double *_x; 
        double *_t;
        int _nx, _nt;
        double _dx,_dt;
    public:
        Grid(Parameters *param);
        double* get_x();
        double* get_t();
        

}

#endif

#ifndef PARAMETERS_H
#define PARAMETERS_H

#define C 137.04

class Parameters{
    public:
        //Geometry
        double xmin, xmax;
        double ymin, ymax;
        double zmin, zmax;
        double tmax;
        double cdtds;
        int nx;
        int nt;
        double dt, dx;
        //Field
        double E0;
        double w0;
        double tmax_env;

        Parameters();
        void check();
        void print();
};

#endif

//
// Created by Peter Kang on 2/8/2023.
//

#ifndef FRACTAL_EXPLORER_FRACTAL_H
#define FRACTAL_EXPLORER_FRACTAL_H

#include <complex>

class Fractal {
public:
    Fractal();
    std::complex<double> T(std::complex<double> z0, std::complex<double> c0);
private:
    int x;
    std::complex<double> c;
    int escape_radius;
    int max_iterations;
    float step_size;
};


#endif //FRACTAL_EXPLORER_FRACTAL_H

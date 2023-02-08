//
// Created by Peter Kang on 2/8/2023.
//

#include "Fractal.h"
Fractal::Fractal() {
    x = -3;
    c = std::complex<double>(0.0, 0.0);
    escape_radius = 20;
    max_iterations = 30;
    step_size = 0.01;
}

std::complex<double> Fractal::T(std::complex<double> z_prime, std::complex<double> c_prime) {
    return z_prime * z_prime + c_prime;
}
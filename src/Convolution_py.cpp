#include "../includes/Convolution_py.h"
#include "../src/Convolution_py.tpp"


template py::array_t<double> Convolution_direct_py( py::array_t<double> f, py::array_t<double> g );
template py::array_t<double> Convolution_direct_py( py::array_t<double> f, py::array_t<int16_t> g );


// template py::array_t<OutputType> Convolution_fft_parallel_py( py::array_t<double> f, py::array_t<double> g , py::array_t<double> h , uint L_data , uint L_kernel , uint L_FFT , int n_threads );
// template py::array_t<OutputType> Convolution_fft_parallel_py( py::array_t<double> f, py::array_t<double> g , py::array_t<double> h , uint L_data , uint L_kernel , uint L_FFT , int n_threads );
// template py::array_t<OutputType> Convolution_fft_parallel_py( py::array_t<double> f, py::array_t<int16_t> g , py::array_t<double> h , uint L_data , uint L_kernel , uint L_FFT , int n_threads );
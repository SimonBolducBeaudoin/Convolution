#pragma once

#include "../../includes/header_common.h"
#include "../includes/Convolution.h"

// Numpy compatible functions
template < typename KernelType, typename DataType , typename OutputType >
py::array_t<OutputType> Convolution_direct_py(py::array_t< KernelType> f, py::array_t<DataType> g );

template < class KernelType, class DataType , class OutputType >
py::array_t<OutputType> Convolution_fft_parallel_py( py::array_t<OutputType> f, py::array_t<DataType> g , uint L_FFT = 1024 , int n_threads = 1 );

void init_Convolution(py::module &m);

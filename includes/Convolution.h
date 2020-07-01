#pragma once

#include "../../includes/header_common.h"
// #include "../Buffered_arrays/includes/buffered_arrays.h"
// #include "../../Scoped_timer/includes/scoped_timer.h"
#include "../../Omp_extra/includes/omp_extra.h"


// Core functions
template <class KernelType, class DataType, class OutputType>
void Convolution_direct( KernelType* f , DataType* g , OutputType* h , uint L_data , uint L_kernel);

template < class KernelType, class DataType , class OutputType>
void Convolution_fft_parallel( KernelType* f , DataType* g , OutputType* h , uint L_data , uint L_kernel , uint L_FFT = (1<<10), int n_threads = 4);
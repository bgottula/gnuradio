/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/fec/polar_common.h>

void bind_polar_common(py::module& m)
{
    using polar_common    = gr::fec::code::polar_common;


    py::class_<polar_common,
        std::shared_ptr<polar_common>>(m, "polar_common")

        .def(py::init<int,int,std::vector<int, std::allocator<int> >,std::vector<char, std::allocator<char> >>(),           py::arg("block_size"), 
           py::arg("num_info_bits"), 
           py::arg("frozen_bit_positions"), 
           py::arg("frozen_bit_values") 
        )
        .def(py::init<gr::fec::code::polar_common const &>(),           py::arg("arg0") 
        )
        ;


} 
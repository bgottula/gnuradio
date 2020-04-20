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

#include <gnuradio/blocks/interleaved_short_to_complex.h>
// pydoc.h is automatically generated in the build directory
#include <interleaved_short_to_complex_pydoc.h>

void bind_interleaved_short_to_complex(py::module& m)
{

    using interleaved_short_to_complex    = ::gr::blocks::interleaved_short_to_complex;


    py::class_<interleaved_short_to_complex, gr::sync_decimator, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<interleaved_short_to_complex>>(m, "interleaved_short_to_complex", D(interleaved_short_to_complex))

        .def(py::init(&interleaved_short_to_complex::make),
           py::arg("vector_input") = false,
           py::arg("swap") = false,
           py::arg("scale_factor") = 1.F,
           D(interleaved_short_to_complex,make)
        )
        




        .def("set_swap",&interleaved_short_to_complex::set_swap,
            py::arg("swap"),
            D(interleaved_short_to_complex,set_swap)
        )


        .def("set_scale_factor",&interleaved_short_to_complex::set_scale_factor,
            py::arg("new_value"),
            D(interleaved_short_to_complex,set_scale_factor)
        )

        ;




}







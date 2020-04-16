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

#include <gnuradio/blocks/int_to_float.h>
// pydoc.h is automatically generated in the build directory
#include <int_to_float_pydoc.h>

void bind_int_to_float(py::module& m)
{

    using int_to_float    = ::gr::blocks::int_to_float;


    py::class_<int_to_float, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<int_to_float>>(m, "int_to_float", D(int_to_float))

        .def(py::init(&int_to_float::make),
           py::arg("vlen") = 1,
           py::arg("scale") = 1.,
           D(int_to_float,make)
        )
        




        .def("scale",&int_to_float::scale,
            D(int_to_float,scale)
        )


        .def("set_scale",&int_to_float::set_scale,
            py::arg("scale"),
            D(int_to_float,set_scale)
        )

        ;




}








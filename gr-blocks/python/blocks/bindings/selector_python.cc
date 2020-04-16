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

#include <gnuradio/blocks/selector.h>
// pydoc.h is automatically generated in the build directory
#include <selector_pydoc.h>

void bind_selector(py::module& m)
{

    using selector    = ::gr::blocks::selector;


    py::class_<selector, gr::block, gr::basic_block,
        std::shared_ptr<selector>>(m, "selector", D(selector))

        .def(py::init(&selector::make),
           py::arg("itemsize"),
           py::arg("input_index"),
           py::arg("output_index"),
           D(selector,make)
        )
        




        .def("set_enabled",&selector::set_enabled,
            py::arg("enable"),
            D(selector,set_enabled)
        )


        .def("enabled",&selector::enabled,
            D(selector,enabled)
        )


        .def("set_input_index",&selector::set_input_index,
            py::arg("input_index"),
            D(selector,set_input_index)
        )


        .def("input_index",&selector::input_index,
            D(selector,input_index)
        )


        .def("set_output_index",&selector::set_output_index,
            py::arg("output_index"),
            D(selector,set_output_index)
        )


        .def("output_index",&selector::output_index,
            D(selector,output_index)
        )

        ;




}








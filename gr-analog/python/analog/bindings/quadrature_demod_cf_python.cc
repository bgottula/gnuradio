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

#include <gnuradio/analog/quadrature_demod_cf.h>

void bind_quadrature_demod_cf(py::module& m)
{
    using quadrature_demod_cf    = gr::analog::quadrature_demod_cf;


    py::class_<quadrature_demod_cf,gr::sync_block,
        std::shared_ptr<quadrature_demod_cf>>(m, "quadrature_demod_cf")

        .def(py::init(&quadrature_demod_cf::make),
           py::arg("gain") 
        )
        

        .def("set_gain",&quadrature_demod_cf::set_gain,
            py::arg("gain") 
        )
        .def("gain",&quadrature_demod_cf::gain)
        .def("to_basic_block",[](std::shared_ptr<quadrature_demod_cf> p){
            return p->to_basic_block();
        })
        ;


} 

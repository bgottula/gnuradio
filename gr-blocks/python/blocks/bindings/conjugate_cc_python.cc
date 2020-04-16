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

#include <gnuradio/blocks/conjugate_cc.h>
// pydoc.h is automatically generated in the build directory
#include <conjugate_cc_pydoc.h>

void bind_conjugate_cc(py::module& m)
{

    using conjugate_cc    = ::gr::blocks::conjugate_cc;


    py::class_<conjugate_cc, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<conjugate_cc>>(m, "conjugate_cc", D(conjugate_cc))

        .def(py::init(&conjugate_cc::make),
           D(conjugate_cc,make)
        )
        



        ;




}








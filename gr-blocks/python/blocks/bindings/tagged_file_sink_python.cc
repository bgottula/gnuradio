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

#include <gnuradio/blocks/tagged_file_sink.h>
// pydoc.h is automatically generated in the build directory
#include <tagged_file_sink_pydoc.h>

void bind_tagged_file_sink(py::module& m)
{

    using tagged_file_sink    = ::gr::blocks::tagged_file_sink;


    py::class_<tagged_file_sink, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<tagged_file_sink>>(m, "tagged_file_sink", D(tagged_file_sink))

        .def(py::init(&tagged_file_sink::make),
           py::arg("itemsize"),
           py::arg("samp_rate"),
           D(tagged_file_sink,make)
        )
        



        ;




}








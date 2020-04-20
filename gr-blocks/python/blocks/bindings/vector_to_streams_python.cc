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

#include <gnuradio/blocks/vector_to_streams.h>
// pydoc.h is automatically generated in the build directory
#include <vector_to_streams_pydoc.h>

void bind_vector_to_streams(py::module& m)
{

    using vector_to_streams    = ::gr::blocks::vector_to_streams;


    py::class_<vector_to_streams, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<vector_to_streams>>(m, "vector_to_streams", D(vector_to_streams))

        .def(py::init(&vector_to_streams::make),
           py::arg("itemsize"),
           py::arg("nstreams"),
           D(vector_to_streams,make)
        )
        



        ;




}







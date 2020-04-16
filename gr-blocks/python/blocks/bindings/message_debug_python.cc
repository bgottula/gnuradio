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

#include <gnuradio/blocks/message_debug.h>
// pydoc.h is automatically generated in the build directory
#include <message_debug_pydoc.h>

void bind_message_debug(py::module& m)
{

    using message_debug    = ::gr::blocks::message_debug;


    py::class_<message_debug, gr::block, gr::basic_block,
        std::shared_ptr<message_debug>>(m, "message_debug", D(message_debug))

        .def(py::init(&message_debug::make),
           D(message_debug,make)
        )
        




        .def("num_messages",&message_debug::num_messages,
            D(message_debug,num_messages)
        )


        .def("get_message",&message_debug::get_message,
            py::arg("i"),
            D(message_debug,get_message)
        )

        ;




}








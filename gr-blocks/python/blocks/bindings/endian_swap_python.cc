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

#include <gnuradio/blocks/endian_swap.h>
// pydoc.h is automatically generated in the build directory
#include <endian_swap_pydoc.h>

void bind_endian_swap(py::module& m)
{

    using endian_swap    = ::gr::blocks::endian_swap;


    py::class_<endian_swap, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<endian_swap>>(m, "endian_swap", D(endian_swap))

        .def(py::init(&endian_swap::make),
           py::arg("item_size_bytes") = 1,
           D(endian_swap,make)
        )
        



        ;




}








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

#include <gnuradio/blocks/unpack_k_bits.h>
// pydoc.h is automatically generated in the build directory
#include <unpack_k_bits_pydoc.h>

void bind_unpack_k_bits(py::module& m)
{




        py::module m_kernel = m.def_submodule("kernel");

    using unpack_k_bits    = ::gr::blocks::kernel::unpack_k_bits;


    py::class_<unpack_k_bits,
        std::shared_ptr<unpack_k_bits>>(m_kernel, "unpack_k_bits", D(kernel,unpack_k_bits))

        .def(py::init<unsigned int>(),           py::arg("k"),
           D(kernel,unpack_k_bits,unpack_k_bits,0)
        )
        .def(py::init<gr::blocks::kernel::unpack_k_bits const &>(),           py::arg("arg0"),
           D(kernel,unpack_k_bits,unpack_k_bits,1)
        )


        .def("unpack",&unpack_k_bits::unpack,
            py::arg("bits"),
            py::arg("bytes"),
            py::arg("nbytes"),
            D(kernel,unpack_k_bits,unpack)
        )


        .def("unpack_rev",&unpack_k_bits::unpack_rev,
            py::arg("bits"),
            py::arg("bytes"),
            py::arg("nbytes"),
            D(kernel,unpack_k_bits,unpack_rev)
        )


        .def("k",&unpack_k_bits::k,
            D(kernel,unpack_k_bits,k)
        )

        ;






}








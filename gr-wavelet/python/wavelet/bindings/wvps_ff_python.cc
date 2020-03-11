/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <gnuradio/wavelet/wvps_ff.h>
#include <gnuradio/sync_block.h>
#include "pybind11_common.h"

void bind_wvps_ff(py::module& m)
{
    using wvps_ff    = gr::wavelet::wvps_ff;


    py::class_<wvps_ff,gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<wvps_ff>>(m, "wvps_ff")

        .def(py::init(&wvps_ff::make),
           py::arg("ilen") 
        )
        ;


} 
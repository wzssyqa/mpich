/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */
/*
 *  (C) 2006 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 *  Portions of this code were written by Intel Corporation.
 *  Copyright (C) 2011-2018 Intel Corporation.  Intel provides this material
 *  to Argonne National Laboratory subject to Software Grant and Corporate
 *  Contributor License Agreement dated February 8, 2012.
 */
#ifndef STUBNM_STARTALL_H_INCLUDED
#define STUBNM_STARTALL_H_INCLUDED

#include "stubnm_impl.h"

static inline int MPIDI_NM_mpi_startall(int count, MPIR_Request * requests[])
{
    return MPIDIG_mpi_startall(count, requests);
}

MPL_STATIC_INLINE_PREFIX void MPIDI_NM_prequest_free_hook(MPIR_Request * req)
{
    MPIDIG_prequest_free_hook(req);
}

#endif /* STUBNM_STARTALL_H_INCLUDED */

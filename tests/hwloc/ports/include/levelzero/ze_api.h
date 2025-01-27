/*
 * Copyright © 2020 Inria.  All rights reserved.
 * See COPYING in top-level directory.
 */

#ifndef HWLOC_PORT_L0_ZE_API_H
#define HWLOC_PORT_L0_ZE_API_H

typedef int ze_result_t;
#define ZE_RESULT_SUCCESS 0

typedef void * ze_driver_handle_t;
typedef void * ze_device_handle_t;

extern ze_result_t zeInit(int);
extern ze_result_t zeDriverGet(uint32_t *, ze_driver_handle_t *);
extern ze_result_t zeDeviceGet(ze_driver_handle_t, uint32_t *, ze_device_handle_t *);

#endif /* HWLOC_PORT_L0_ZE_API_H */

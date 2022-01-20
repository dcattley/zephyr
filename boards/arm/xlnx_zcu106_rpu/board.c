/*
 * Copyright (c) 2020, Antmicro
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <init.h>

static int xlnx_zcu106_rpu_init(const struct device *port)
{
	ARG_UNUSED(port);

	return 0;
}

SYS_INIT(xlnx_zcu106_rpu_init, PRE_KERNEL_2,
		CONFIG_KERNEL_INIT_PRIORITY_DEFAULT);

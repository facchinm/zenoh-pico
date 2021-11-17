/*
 * Copyright (c) 2017, 2021 ADLINK Technology Inc.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0, or the Apache License, Version 2.0
 * which is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
 *
 * Contributors:
 *   ADLINK zenoh team, <zenoh@adlink-labs.tech>
 */

#ifndef ZENOH_PICO_TRANSPORT_LINK_TASK_LEASE_H
#define ZENOH_PICO_TRANSPORT_LINK_TASK_LEASE_H

#include "zenoh-pico/session/session.h"

int _znp_send_keep_alive(zn_session_t *zn);

void *_znp_lease_task(void *arg);

#endif /* ZENOH_PICO_TRANSPORT_LINK_TASK_LEASE_H */

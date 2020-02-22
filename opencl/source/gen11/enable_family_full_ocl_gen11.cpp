/*
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 */

#include "core/command_stream/command_stream_receiver_hw.h"

#include "command_queue/command_queue_hw.h"
#include "command_stream/aub_command_stream_receiver_hw.h"
#include "command_stream/tbx_command_stream_receiver_hw.h"
#include "device_queue/device_queue_hw.h"

#ifdef HAVE_INSTRUMENTATION
#include "event/perf_counter.h"
#endif
#include "mem_obj/buffer.h"
#include "mem_obj/image.h"
#include "sampler/sampler.h"

namespace NEO {

typedef ICLFamily Family;

struct EnableOCLGen11 {
    EnableOCLGen11() {
        populateFactoryTable<AUBCommandStreamReceiverHw<Family>>();
        populateFactoryTable<TbxCommandStreamReceiverHw<Family>>();
        populateFactoryTable<CommandQueueHw<Family>>();
        populateFactoryTable<DeviceQueueHw<Family>>();
        populateFactoryTable<CommandStreamReceiverHw<Family>>();
        populateFactoryTable<BufferHw<Family>>();
        populateFactoryTable<ImageHw<Family>>();
        populateFactoryTable<SamplerHw<Family>>();
    }
};

static EnableOCLGen11 enable;
} // namespace NEO
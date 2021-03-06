/*
 * Copyright (C) 2020-2021 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 */

#pragma once
#include <iostream>
#include <poll.h>

namespace NEO {
namespace SysCalls {
int close(int fileDescriptor);
int open(const char *file, int flags);
void *dlopen(const char *filename, int flag);
int ioctl(int fileDescriptor, unsigned long int request, void *arg);
int getDevicePath(int deviceFd, char *buf, size_t &bufSize);
int access(const char *pathname, int mode);
int readlink(const char *path, char *buf, size_t bufsize);
int poll(struct pollfd *pollFd, unsigned long int numberOfFds, int timeout);
} // namespace SysCalls
} // namespace NEO

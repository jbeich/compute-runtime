/*
 * Copyright (C) 2017-2020 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 */

#include "shared/source/utilities/debug_settings_reader.h"

#include "shared/source/utilities/debug_file_reader.h"

namespace NEO {

const char *SettingsReader::settingsFileName = "igdrcl.config";

SettingsReader *SettingsReader::createFileReader() {
    std::ifstream settingsFile;
    settingsFile.open(settingsFileName);
    if (settingsFile.is_open()) {
        settingsFile.close();
        return new SettingsFileReader();
    }
    return nullptr;
}
}; // namespace NEO

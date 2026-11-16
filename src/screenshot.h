#pragma once

#include <stdint.h>

enum {
    SCREENSHOT_FILE_SIZE = 153666,
    SCREENSHOT_CLUSTER_COUNT = 301,
    CSV_FILE_SIZE = 12288,
};

uint8_t screenshot_render_current(uint32_t offset, uint8_t *dst, uint16_t len);
char *screenshot_csv_buffer(void);

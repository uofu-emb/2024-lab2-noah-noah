#ifndef BLINK_HELPER_H
#define BLINK_HELPER_H

#include "FreeRTOS.h"
#include "task.h"

void blink_step(int *count, bool *on);

#endif /* BLINK_HELPER_H */
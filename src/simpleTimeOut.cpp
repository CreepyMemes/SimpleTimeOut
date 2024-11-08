#include "simpleTimeOut.h"

SimpleTimeOut::SimpleTimeOut(uint64_t duration_ms) :
    _timeout_duration(duration_ms) {}

void SimpleTimeOut::start() {
    _start_time = millis();
}

bool SimpleTimeOut::isExpired() {
    return (millis() - _start_time >= _timeout_duration);
}

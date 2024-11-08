#ifndef SIMPLE_TIME_OUT_H
#define SIMPLE_TIME_OUT_H

#include <Arduino.h>

class SimpleTimeOut {
    public:
        SimpleTimeOut(uint64_t duration_ms);

        void start();
        bool isExpired();

    private:
        uint64_t _timeout_duration;
        uint64_t _start_time;
};

#endif // SIMPLE_TIME_OUT_H
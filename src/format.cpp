#include <string>
#include "format.h"

using std::string;

std::string Format::ElapsedTime(long seconds) { 
    long hr, min, sec;
    hr = seconds/3600;
    min = (seconds - 3600*hr)/60;
    sec = (seconds - 3600*hr)%60;

    std::string H, M, S;
    if (hr > 99) {
        H = "-99";
    } else if (hr >= 10 && hr <= 99 ){
        H = std::to_string(hr);
    } else {
        H = "0" + std::to_string(hr);
    }

    if (min >= 10 && min < 60) {
        M = std::to_string(min);
    } else if (min < 10) {
        M = "0" + std::to_string(min);
    } else {
        M = "-99";
    }

    if (sec >= 10 && sec < 60) {
        S = std::to_string(sec);
    } else if (sec < 10) {
        S = "0" + std::to_string(sec);
    } else {
        S = "-99";
    }
    return H + ":" + M + ":" + S; 
}

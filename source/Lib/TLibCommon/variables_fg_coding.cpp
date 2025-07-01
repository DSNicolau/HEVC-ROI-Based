#include "variables_fg_coding.h"

int myQP_fg = 0;

std::string imagePath = "";

int getmyQP_fg() {
    return myQP_fg;
}

void setmyQP_fg(int value) {
    myQP_fg = value;
}

std::string getImagePath() {
    return imagePath;
}

void setImagePath(const std::string &path) {
    imagePath = path;
}

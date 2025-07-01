#ifndef VARIABLES_FG_CODING_H
#define VARIABLES_FG_CODING_H

#include <string>  // Include string header

extern int myQP_fg;
extern std::string imagePath;

int getmyQP_fg();
void setmyQP_fg(int value);

std::string getImagePath();
void setImagePath(const std::string &path);

#endif 

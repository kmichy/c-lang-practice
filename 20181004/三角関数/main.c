#include <stdio.h>
#include <math.h>
#define RADIAN(ARC) ((ARC) * 3.14159 / 180)

int main(void){
    double stature = 160;
    double distance = 500;
    double arc = 40;
    double tree;

    tree = distance * tan(RADIAN(arc)) + stature;
    printf("%fm\n",tree / 100);
    return 0;
}
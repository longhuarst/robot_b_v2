//
// Created by coocx on 2018/12/18.
//

#ifndef ROBOT_B_V2_CONTROL_B_H
#define ROBOT_B_V2_CONTROL_B_H

#include <stdint.h>
#include <stdbool.h>




#define PI (3.14)

typedef struct{

    float a;
    float b;


    float x;
    float y;

    float R;

    float cita;
    float beta;
    float gama;
    float alpha;


}b_type;


extern void calc(b_type *b);//计算


#endif //ROBOT_B_V2_CONTROL_B_H

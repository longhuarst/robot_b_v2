#include <iostream>
#include <stdio.h>
#include <math.h>


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




void calc(b_type *b)
{

    b->R = sqrt(b->x*b->x + b->y*b->y);

    b->cita = acos((b->a * b->a + b->R * b->R - b->b * b->b)/(2 * b->a * b->R));

    b->gama = acos((b->a * b->a + b->b * b->b - b->R * b->R)/(2 * b->a * b->b));

    b->beta = 2 * M_PI - b->gama;

    if (b->x != 0){
        b->alpha = atan(fabs(b->y / b-> x));//令 y/x 为正值 保证在0~90° 即 在第一象限
    }


    //根据象限去决定alpha的值
    if (b->x > 0 && b->y >0){
        //第一象限
        b->alpha = b->alpha;//不变化
    }else if (b->x < 0 && b->y > 0){
        //第二象限
        b->alpha = M_PI - b->alpha;
    }else if (b->x < 0 && b->y < 0){
        //第三象限
        b->alpha = M_PI + b->alpha;//取反
    }else if (b->x > 0 && b->y < 0){
        //第四象限
        b->alpha = 2 * M_PI - b->alpha;
    }else if (b->x == 0){
        if (b->y > 0){
            //Y轴正方向
            b->alpha = M_PI / 2;
        }else if (b->y < 0){
            //Y轴负方向
            b->alpha = M_PI + M_PI / 2;
        }else {
            //不存在
            printf("该坐标不满足计算要求！\r\n");
        }
    }else if (b->y == 0){
        if (b->x > 0){
            //X轴正方向
            b->alpha = 0;
        }else if (b->x < 0){
            //X轴负方向
            b->alpha = M_PI;
        }else{
            //不存在
            printf("该坐标不满足计算要求！\r\n");
        }
    }


}



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
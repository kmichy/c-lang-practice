#include <math.h>
#include <stdio.h>

int main(void)
{

    //コンパイルの際にオプションで-lmを付けない場合、エラーが起こる可能性あり
    double x;

    for (x = 0.0; x <= 10.0; x += 1.0) {
        printf("%f の 平方根は %f\n", x, sqrt(x));
    }
    return 0;
}
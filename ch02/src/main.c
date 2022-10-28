#include <stdio.h>

#include "structures.h"
#include "utils.h"
#include "print.h"


int	main(void)
{
    int     i;
    int     j;
    int     canvas_width;
    int     canvas_height;
    t_color3    pixel_color;

    //캔버스의 가로, 세로 픽셀값
    canvas_width = 256;
    canvas_height = 256;

    // 랜더링
    // P3 는 색상값이 아스키코드라는 뜻, 그리고 다음 줄은 캔버스의 가로, 세로 픽셀 수, 마지막은 사용할 색상값
    j = canvas_height - 1;
    while (j >= 0)
    {
        i = 0;
        while (i < canvas_width)
        {
            r = (double)i / (canvas_width - 1);
            g = (double)j / (canvas_height - 1);
            b = 0.25;
            write_color(pixel_color);
        ++i;
        }
    --j;
    }
    return (0);
}
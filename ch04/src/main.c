#include <stdio.h>
#include "structures.h"
#include "utils.h"
#include "print.h"
#include "scene.h"
#include "trace.h"

const int g_width = 400;
const int g_height = 300;

int	main(void)
{
    int     i;
    int     j;
    double     u;
    double     v;
    int     canvas_width;
    int     canvas_height;
    t_color3    pixel_color;
    t_canvas    canv;
    t_camera    cam;
    t_ray       ray;
    t_sphere    sp;

    canv = canvas(g_width, g_height);
    cam = camera(&canv, point3(0, 0, 0));

    //캔버스의 가로, 세로 픽셀값
    canvas_width = g_width;
    canvas_height = g_height;
    sp = sphere(point3(0, 0, -5), 2);
    // 랜더링
    // P3 는 색상값이 아스키코드라는 뜻, 그리고 다음 줄은 캔버스의 가로, 세로 픽셀 수, 마지막은 사용할 색상값
    printf("P3\n%d %d\n255\n", canv.width, canv.height);
    j = canvas_height - 1;
    while (j >= 0)
    {
        i = 0;
        while (i < canvas_width)
        {
            u = (double) i / (canv.width - 1);
            v = (double) j / (canv.height - 1);

            ray = ray_primary(&cam, u, v);
            // printf("u: %f, v:%f\n", u, v);
            pixel_color = ray_color(&ray, &sp);
            write_color(pixel_color);
            ++i;
        }
        --j;
    }
    return (0);
}
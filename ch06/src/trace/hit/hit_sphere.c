#include "structures.h"
#include "utils.h"

double  hit_sphere(t_sphere *sp, t_ray *ray)
{
    t_vec3  sphere_center;
    double  a;
    double  b;
    double  c;
    double  discriminant;

    oc = vminus(ray->orig, sp->center);
    a = vdot(ray->dir, ray->dir);
    b = 2.0 * vdot(oc, ray->dir);
    c = vdot(oc, oc) - sp->radius_square;
    discriminant = b * b - 4 * a * c;
    if (discriminant < 0)
        return (-1.0);
    return ((-b - sqrt(discriminant)) / (2.0 * a));// 둘 중에 작은 근을 return
}

#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef struct  s_vec3  t_vec3;
typedef struct  s_vec3  t_point3;
typedef struct  s_vec3  t_color3;

typedef struct  s_ray   t_ray;

typedef struct s_camera t_camera;
typedef struct s_canvas t_canvas;

// sphere structure
typedef struct s_sphere t_sphere;
typedef int t_bool;
typedef struct s_hit_record t_hit_record;


# define FALSE 0
# define TRUE 1

struct s_vec3
{
    double x;
    double y;
    double z;
};

struct  s_ray
{
    t_point3    orig;
    t_vec3      dir;
};

typedef struct s_camera
{
    t_point3    orig;
    double      viewport_h;
    double      viewport_w;
    t_vec3      horizontal;
    t_vec3      vertical;
    double      focal_len;
    t_point3    left_bottom;
};

typedef struct s_canvas
{
    int     width;
    int     height;
    double  aspect_ratio;
};

struct s_sphere
{
    t_point3    center;
    double      radius;
    double      radius_square;
};

struct s_hit_record
{
    t_point3    p;
    t_vec3      normal;
    double      tmin;
    double      tmax;
    double      t;
    t_bool      front_face;
}

#endif
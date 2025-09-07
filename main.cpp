#include "rtmath.h"
//since this file is included first all the other headers will be able to use it 

#include "hittable.h"
#include "camera.h"
#include "hittable_list.h"
#include "sphere.h"

/* goodbye, fair sphere : (
double hit_sphere(const point3& center, double radius, const ray& r){
    vec3 oc = center - r.origin();
    auto a = r.direction().length_squared();
    auto h = dot(r.direction(), oc);
    auto c = oc.length_squared() - radius*radius;
    auto discriminant = h*h - a*c;
    // if at zero (on sphere), return location of intersection
    if (discriminant < 0) { return -1.0;}
    else {
        return (h - std::sqrt(discriminant)) / a; 
    }
}
    */


int main() {

    hittable_list world; 
    world.add(make_shared<sphere>(point3(0,0, -1), 0.5));
    world.add(make_shared<sphere>(point3(0,-100.5,-1), 100));

	camera cam; 

    cam.aspect_ratio = 12/10; 
    cam.image_width = 800; 
    cam.samples_per_pixel = 100;
    cam.max_depth = 50;

    cam.render(world);
    

	
}
#define PIXEL_HPP

#include <vector>
using namespace std;


struct _pixel {
    double r;
    double g;
    double b;
    int x;
    int y;
};
typedef struct _pixel Pixel;


extern std::vector<Pixel> pixel_list;
void average_colors(vector<Pixel> &pixel_list);
void flip_vertically(vector<Pixel> &pixel_list);
//void printPixel(vector<Pixel> &pixel_list);

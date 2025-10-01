#include<iostream>
#include<iostream>
#include<vector>
#include "pixel.hpp"

using namespace std;



vector<Pixel> pixel_list;

void average_colors(vector<Pixel> &pixel_list)
{
    double r_temp = 0;
    double g_temp = 0;
    double b_temp = 0;
    int size = pixel_list.size();

    for(int i = 0; i < size; i++)
    {
        r_temp += pixel_list[i].r;
        g_temp += pixel_list[i].g;
        b_temp += pixel_list[i].b;
    }

    float rAv = r_temp / size;
    float gAv = g_temp / size;
    float bAv = b_temp / size;

   cout<<endl<<"r average value = "<<rAv<<endl;
   cout<<"g average value = "<<gAv<<endl;
   cout<<"b average value = "<<bAv<<endl<<endl;


}

void flip_vertically(vector<Pixel> &pixel_list)
{
    int size = pixel_list.size() - 1;

    for(int i = 0; i < size / 2; i++)
    {
        int index = size - i;
        swap(pixel_list[i].y, pixel_list[index].y);
    }
}

// void printPixel(vector<Pixel> &pixel_list)
// {
   
//     int size = pixel_list.size();
//     cout<<endl<<endl;
//     for(int i = 0; i < size; i++)
//    { 
//         cout<<"------------Pixel "<<i<<"-----------------"<<endl<<endl;
//         cout<<"x = "<<pixel_list[i].x<<endl;
//         cout<<"y = "<<pixel_list[i].y<<endl;
//         cout<<"r = "<<pixel_list[i].r<<endl;
//         cout<<"g = "<<pixel_list[i].g<<endl;
//         cout<<"b = "<<pixel_list[i].b<<endl<<endl;
//    }
// }


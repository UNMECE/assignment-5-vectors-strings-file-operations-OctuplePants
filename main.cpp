#include<iostream>
#include<cstdlib>
#include<vector>
#include "pixel.hpp"
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;






int main(int argc, char* argv[])
{
 
    if(argc > 1)
 {
    
    char *charIn = argv[1];
    ifstream ifile(charIn);

   if (ifile.is_open())
    {       
            Pixel p;
            string line;
            while (getline(ifile, line))
            {
                p.x = stoi(line.substr(0,1));
                p.y = stoi(line.substr(2,3));
                p.r = stod(line.substr(4,22));
                p.g = stod(line.substr(23,41));
                p.b = stod(line.substr(42,60));
                pixel_list.push_back(p);
            }
            ifile.close();
    }
    else
        cout<<"could not open file"<<endl;
    
 

  

  
    average_colors(pixel_list);
    flip_vertically(pixel_list);
    

    ofstream ofile;
    ofile.open("new_pixels.dat");


     if(ofile.is_open())
    {
        int size = pixel_list.size();
        for(int i = 0; i < size; i++ )
        {
            ofile<<pixel_list[i].x<<",";
            ofile<<pixel_list[i].y<<",";
            ofile<<setprecision(16)<<pixel_list[i].r<<",";
            ofile<<setprecision(16)<<pixel_list[i].g<<",";
            ofile<<setprecision(17)<<pixel_list[i].b<<endl;

        }
        
        
        ofile.close();
    }
    else 
        cout<<"can't write to file"<<endl;

 }

 
 else cout<<"Invalid or Missing Command Line Argument"<<endl;


}

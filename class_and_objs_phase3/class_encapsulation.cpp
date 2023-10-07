#include <iostream>
using namespace std;

class Cube{
    public:
    int length;
    int width;
    int height;

    int get_square(int length, int width){
        int square = 0;
        square = length*width;
        return square;
    }

    int get_volume(int length, int width, int height){
        int volume = 0;
        volume = length*width*height;
        return volume;
    }

};

int main(){
    Cube cube;
    cube.length = 1;
    cube.width = 4;
    cube.height = 3;

    int square = cube.get_square(cube.length,cube.width);
    int volume = cube.get_volume(cube.length,cube.width,cube.height);

    cout<<"square: "<<square<<endl;
    cout<<"volume: "<<volume<<endl;


}
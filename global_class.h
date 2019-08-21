#ifndef GLOBAL_CLASS_H
#define GLOBAL_CLASS_H
enum class Terrain{
    grass=0,rock,sand,water,tree
};
struct Map_option{
    int width;
    int height;
    Terrain terrain;
    Map_option(int w, int h, Terrain t){
        width=w;
        height=h;
        terrain=t;
    }
};
#endif // GLOBAL_CLASS_H

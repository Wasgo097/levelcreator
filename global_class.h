#ifndef GLOBAL_CLASS_H
#define GLOBAL_CLASS_H
enum class Terrain{
    grass=0,rock,sand,water,tree
};
struct Map_option{
    int x=0;
    int y=0;
    int width;
    int height;
    Terrain terrain;
    Map_option(int w=730, int h=600, Terrain t=Terrain::water){
        width=w;
        height=h;
        terrain=t;
    }
};
#endif // GLOBAL_CLASS_H

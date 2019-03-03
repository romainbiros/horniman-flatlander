#pragma once

#include "ofMain.h"
#include "ofxDelaunay.h"

class FunkyTriangle{
    
public:
    
    FunkyTriangle();
    
    ofPoint a, b, c;

    void draw();
    void update();
    void setup(ofPoint first, ofPoint second, ofPoint third);
    int phase;
    int phase2;
    int phase3;
    ofColor color, color2, color3, color4, color5, color6;
    
    ofMesh triangle;
};

#pragma once

#include "ofMain.h"
#include "ofxDelaunay.h"
#include "FunkyTriangle.h"

class FunkyTriangleSystem{
    
public:
    
    FunkyTriangleSystem();
    void addTriangle(FunkyTriangle tempTriangle);
    void clear();
    void draw();
    vector<FunkyTriangle> myFunkyTriangles;
};

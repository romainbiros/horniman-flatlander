#include "FunkyTriangle.h"

FunkyTriangle::FunkyTriangle(){
    color=ofColor::goldenRod;
    color2=ofColor::seaGreen;
    color3=ofColor::lightCoral;
    phase = ofRandom(0,1000);
    phase2 = ofRandom(0,1000);
    phase3 = ofRandom(0,1000);
}


void FunkyTriangle::setup(ofPoint first, ofPoint second, ofPoint third){

    a = first;
    b = second;
    c = third;
    triangle.clear();
    
    triangle.setMode(OF_PRIMITIVE_TRIANGLES);
    triangle.addVertex(a);
    triangle.addColor(color4);
    triangle.addVertex(b);
    triangle.addColor(color5);
    triangle.addVertex(c);
    triangle.addColor(color6);
    triangle.drawWireframe();
    
}

void FunkyTriangle::update(){
    
    float firstMix = ofMap(sin(ofDegToRad(phase)),-1, 1, 0, 1);
    float secondMix = ofMap(sin(ofDegToRad(phase2)),-1, 1, 0, 1);
    float thirdMix = ofMap(sin(ofDegToRad(phase3)),-1, 1, 0, 1);
    
    color4 = color.getLerped(color2, firstMix);
    color5 = color2.getLerped(color3, secondMix);
    color6 = color3.getLerped(color, thirdMix);

    if(ofGetFrameNum()%1 == 0) phase+=1;
    if(ofGetFrameNum()%1 == 0) phase2+=1;
    if(ofGetFrameNum()%1 == 0) phase3+=1;
    
}

void FunkyTriangle::draw(){
    
    triangle.draw();

}

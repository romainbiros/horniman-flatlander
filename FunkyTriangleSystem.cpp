#include "FunkyTriangleSystem.h"

FunkyTriangleSystem::FunkyTriangleSystem(){

}


void FunkyTriangleSystem::addTriangle(FunkyTriangle tempTriangle){
    myFunkyTriangles.push_back(tempTriangle);
}

void FunkyTriangleSystem::clear(){
    myFunkyTriangles.clear();
}

void FunkyTriangleSystem::draw(){
    for (int i=0; i<myFunkyTriangles.size(); i++){
        myFunkyTriangles[i].update();
        myFunkyTriangles[i].draw();
    }
}

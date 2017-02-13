//
//  Particle.hpp
//  cim594_06_particle
//
//  Created by Clay Ewing on 1/24/17.
//
// Example from Zach Lieberman, http://github.com/ofZach/algo2012
// https://github.com/ofZach/algo2012/tree/master/week4/drawingWithParticles


#ifndef PARTICLE_H
#define PARTICLE_H

#include "ofMain.h"

class Particle{
    
public:
    
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f frc;   // frc is also know as acceleration (newton says "f=ma")
    
    Particle();
    virtual ~Particle(){};
    
    void resetForce();
    void addForce(float x, float y);
    void addDampingForce();
    void setInitialCondition(float px, float py, float vx, float vy);
    void addImage(ofImage &image);
    void update();
    void draw();
    void bounceOffWalls();
    
    float damping;
    float a;
    //life is going to be a counter, we set it to 100 in setup, and subtract 1 each frame
    int life;
    ofColor color;
    float radius;
    
protected:
private:
};

#endif // PARTICLE_H

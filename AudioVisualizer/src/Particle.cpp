//
//  Particle.cpp
//  cim594_06_particle
//

// Example from Zach Lieberman, http://github.com/ofZach/algo2012
// https://github.com/ofZach/algo2012/tree/master/week4/drawingWithParticles

#include "Particle.hpp"


//------------------------------------------------------------
Particle::Particle(){
    setInitialCondition(0,0,0,0);
    damping = 0.01f;
    color = ofColor(255,255,255);
    a = 255;
    radius = ofRandom(10,50);
    life = 500;
}

//------------------------------------------------------------
void Particle::resetForce(){
    // we reset the forces every frame
    frc.set(0,0);
}

//------------------------------------------------------------
void Particle::addForce(float x, float y){
    // add in a force in X and Y for this frame.
    frc.x = frc.x + x;
    frc.y = frc.y + y;
}

//------------------------------------------------------------
void Particle::addDampingForce(){
    
    // the usual way to write this is  vel *= 0.99
    // basically, subtract some part of the velocity
    // damping is a force operating in the oposite direction of the
    // velocity vector
    
    //frc = frc - vel * damping;
    
    frc.x -= vel.x * damping;
    frc.y -= vel.y * damping;
}

//------------------------------------------------------------
void Particle::setInitialCondition(float px, float py, float vx, float vy){
    pos.set(px,py);
    vel.set(vx,vy);
}

//------------------------------------------------------------
void Particle::update(){
    vel = vel + frc;
    pos = pos + vel;
    a *= .99f;
    life--;
}

//------------------------------------------------------------
void Particle::draw(){
        ofSetColor(color, 255);
        ofDrawCircle(pos.x, pos.y, 3);
}

void Particle::bounceOffWalls(){
    
    // sometimes it makes sense to damped, when we hit... for now, we don't
    bool bDampedOnCollision = false;
    bool bDidICollide = false;
    
    // what are the walls
    float minx = 0;
    float miny = 0;
    float maxx = ofGetWidth();
    float maxy = ofGetHeight();
    
    if (pos.x > maxx){
        pos.x = maxx; // move to the edge, (important!)
        vel.x *= -1;
        bDidICollide = true;
    } else if (pos.x < minx){
        pos.x = minx; // move to the edge, (important!)
        vel.x *= -1;
        bDidICollide = true;
    }
    
    if (pos.y > maxy){
        pos.y = maxy; // move to the edge, (important!)
        vel.y *= -1;
        bDidICollide = true;
    } else if (pos.y < miny){
        pos.y = miny; // move to the edge, (important!)
        vel.y *= -1;
        bDidICollide = true;
    }
    
    if (bDidICollide == true && bDampedOnCollision == true){
        vel *= 0.9;
    }
    
}


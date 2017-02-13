//
//  TimedSound.cpp
//  cim594_18_audioout
//
//  Created by Clay Ewing on 2/8/17.
//
//

#include "TimedSound.hpp"

TimedSound::TimedSound(){
}

void TimedSound::draw() {
    ofSetColor(255, 0, 0);
    ofDrawCircle(a, 20);
}

void TimedSound::play(int pos) {
    if(pos == position) {
        sound->play();
    }
}

bool TimedSound::grabbing(int x, int y) {
    if(ofDist(x, y, a.x, a.y) <= 20) {
        return true;
    }
    return false;
}

void TimedSound::move(int x, int pos) {
    a.set(x, a.y);
    position = pos;
}

void TimedSound::update() {
    
}

void TimedSound::setInitialConditions(int x, int y, int pos) {
    a.set(x,y);
    position = pos;
}

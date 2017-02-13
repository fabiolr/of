#pragma once

#include "ofMain.h"
#include "TimedSound.hpp"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    int loopReturnLength;
    int currentPosition;
    
    vector<TimedSound> sounds;
    int grabbedIndex;
    bool movingSound;
    
    ofSoundPlayer instruments[7];
//    ofSoundPlayer instruments[0];
//    ofSoundPlayer instruments[1];
//    ofSoundPlayer instruments[2];
//    ofSoundPlayer instruments[3];
//    ofSoundPlayer instruments[4];
//    ofSoundPlayer instruments[5];
//    ofSoundPlayer instruments[6];
//    ofSoundPlayer instruments[7];
    
    
//    
//    ofSoundPlayer clap;
//    ofSoundPlayer crash;
//    ofSoundPlayer hihat;
//    ofSoundPlayer kick;
//    ofSoundPlayer openhat;
//    ofSoundPlayer perc;
//    ofSoundPlayer snare;
//    ofSoundPlayer tom;
//    

};

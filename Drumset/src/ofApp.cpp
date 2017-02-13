#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    

        instruments[0].load("clap.wav");
        instruments[1].load("crash.wav");
        instruments[2].load("hihat.wav");
        instruments[3].load("kick.wav");
        instruments[4].load("openhat.wav");
        instruments[5].load("perc.wav");
        instruments[6].load("snare.wav");
        instruments[7].load("tom.wav");

    for (int i = 0; i < 8 ; i++) {
                instruments[i].setMultiPlay(true);
                instruments[i].setLoop(false);
    }


    
    
    loopReturnLength = 100;
    ofSetVerticalSync(true);
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < sounds.size(); i++) {
        sounds[i].play(currentPosition);
    }
    currentPosition++;
    if(currentPosition >= loopReturnLength) {
        currentPosition = 0;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int j = 0; j < 8; j++) {
        
        float currentXPositionOnScreen = ofMap(currentPosition, 0, loopReturnLength, 0, ofGetWidth());
        ofDrawCircle(currentXPositionOnScreen, (ofGetHeight()/8) + (8 * j), 20);
        
        for(int i = 0; i < sounds.size(); i++) {
            sounds[i].draw();
        }

        
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == OF_KEY_UP) {
        loopReturnLength--;
    }
    if(key == OF_KEY_DOWN) {
        loopReturnLength++;
    }
    if(loopReturnLength < 10) {
        loopReturnLength == 10;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    if(movingSound) {
        float xPos = ofMap(x, 0, ofGetWidth(), 0, loopReturnLength);
        sounds[grabbedIndex].move(x, xPos);
    }
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    for (int i = 0; i < sounds.size(); i++) {
        if(sounds[i].grabbing(x, y)) {
            grabbedIndex = i;
            movingSound = true;
        }
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    if(!movingSound) {
        TimedSound tmpSound;
        tmpSound.sound = &instruments[0];
        float xPos = ofMap(x, 0, ofGetWidth(), 0, loopReturnLength);
        
        tmpSound.setInitialConditions(x,ofGetHeight()/2, xPos);
        sounds.push_back(tmpSound);
    }
    else {
        movingSound = false;
    }
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}

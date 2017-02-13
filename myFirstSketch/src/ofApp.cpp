#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ballSize = 20;
    x = ofGetWidth()/2;
    y = ofGetHeight()/2;
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    y = y + 1;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < 5; i++)
    ofDrawCircle(x,y + i * 50,ballSize);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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

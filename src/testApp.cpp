#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    // [P] println("hello ITP");
    cout << "hello ITP" << endl;

    // [P] smooth();
    ofEnableAntiAliasing();
    ofSetCircleResolution(50);
    
    rad = 50;
    
    // center of your window
    posX = ofGetWidth()/2;
    posY = ofGetHeight()/2;
    
    speedX = 5;
    speedY = 5;
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    // [P] backgroung(0);
    ofBackground(255,0,0);

    // to fill the circle in black
    // [P] fill(0);
    ofSetColor(0);
    ofFill();
    
    // stroke in black
//    ofNoFill();
    
    
    
    posY += speedY;
    
    if(posY > ofGetHeight() || posY < 0)
        speedY *= -1; // make moving in opposite direction
        // speedY = speedY * -1;
    
    // [P] ellipse(width/2, height/2, 50, 50);
    
    ofCircle(posX, posY, rad);
    
    
    // make another circle based on your mouse position
//    ofSetColor(255);
//    ofFill();
//    ofCircle(mouseX, mouseY, rad);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
    // map key from 1 to 9 to the radius
    // [P] map(key, '1', '9', 20, 200);
    
    rad = ofMap(key, '1', '9', 20, 200);
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
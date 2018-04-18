#include "ofApp.h"

/**
 To test this app, try adding these command line arguments:
	-opt1 "value 1"
	opt2="value 2"
	-f1
 
 Check your console after running!
 */

//--------------------------------------------------------------
void ofApp::setup(){
	// for debugging, you can print the arguments and options...
	this->args->printArgs();
	this->args->printOpts();
	
	// Read application settings...
	// initialize default option values in case they are not passed
	this->option1 = this->option2 = "";
	this->flag1 = false;
	
	/** option1 could be set with any of the following:
		-opt1="value 1"
		-opt1 "value 1"
	*/
	if(this->args->contains("-opt1")){
		this->option1 = this->args->getString("-opt1");
	}
	
	/** option2 could be set with the following:
		opt2="value 2"
	 
	 but not:
		opt2 "value 2"
	 */
	if(this->args->contains("opt2")){
		this->option2 = this->args->getString("opt2");
	}
	
	
	/** flag1 is set with:
		-f1
	 */
	this->flag1 = this->args->contains("-f1");
	
	cout << endl;
	cout << "Application settings:" << endl;
	cout << "\toption1: '" << this->option1 << "'" << endl;
	cout << "\toption2: '" << this->option2 << "'" << endl;
	cout << "\tflag1: " << (this->flag1?"true":"false") << endl;
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	
}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){ 
	
}

//--------------------------------------------------------------
void ofApp::keyReleased  (int key){ 
	
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
void ofApp::mouseReleased(){

}

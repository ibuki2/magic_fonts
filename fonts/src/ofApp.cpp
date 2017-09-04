#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(0, 0, 0);
	ofSetFrameRate(60);
	ofEnableAlphaBlending();
	myFont.loadFont("dq10font.ttf", 100);
	
	WORDS = { "‚ ","‚¢","‚¤","‚¦","‚¨","‚©","‚«","‚­","‚±","‚³","‚µ","‚·","‚¹","‚»","‚½","‚Â","‚Ä","‚Æ","‚È","‚É","‚Ê","‚Ë","‚Ì","‚Í","‚Ð","‚Ó","‚Ö","‚Ù","‚Ü","‚Ý","‚Þ","‚ß","‚à","‚â","‚ä","‚æ","‚ç","‚è","‚é","‚ê","‚ë","‚í","‚ð","‚ñ" ,"‚ª","‚¬","‚®","‚²","‚´","‚¶","‚¸","‚º","‚¼","‚¾","‚Ã","‚Å","‚Ç","‚Î","‚Ñ","‚Ô","‚×","‚Ú","‚Ï","‚Ò","‚Õ","‚Ø","‚Û"};
	num = size(WORDS);
	
}

//--------------------------------------------------------------
void ofApp::update() {
	index=ofRandom(num);

	countTime++;
	count = countTime % 300;


	
	
	
	if (count==0) {
		text1 = WORDS[index];
		x1 = ofGetMouseX();
		y1 = ofGetMouseY();
		a1 = 255;
	}
	if (count==15) {
		text2 = WORDS[index];
		x2 = ofGetMouseX();
		y2 = ofGetMouseY();
		a2 = 255;
	}
	if (count == 30) {
		text3 = WORDS[index];
		x3 = ofGetMouseX();
		y3 = ofGetMouseY();
		a3 = 255;
	}
	if (count == 45) {
		text4 = WORDS[index];
		x4 = ofGetMouseX();
		y4 = ofGetMouseY();
		a4 = 255;
	}
	if (count == 60) {
		text5 = WORDS[index];
		x5 = ofGetMouseX();
		y5 = ofGetMouseY();
		a5 = 255;
	}
	if (count == 75) {
		text6 = WORDS[index];
		x6 = ofGetMouseX();
		y6 = ofGetMouseY();
		a6 = 255;
	}
	if (count == 90) {
		text7 = WORDS[index];
		x7 = ofGetMouseX();
		y7 = ofGetMouseY();
		a7 = 255;
	}
	if (count == 105) {
		text8 = WORDS[index];
		x8 = ofGetMouseX();
		y8 = ofGetMouseY();
		a8 = 255;
	}
	if (count == 120) {
		text9 = WORDS[index];
		x9 = ofGetMouseX();
		y9 = ofGetMouseY();
		a9 = 255;
	}
	if (count == 135) {
		text10 = WORDS[index];
		x10 = ofGetMouseX();
		y10 = ofGetMouseY();
		a10 = 255;
	}
	if (count == 150) {
		text11 = WORDS[index];
		x11 = ofGetMouseX();
		y11 = ofGetMouseY();
		a11 = 255;
	}
	if (count == 165) {
		text12 = WORDS[index];
		x12 = ofGetMouseX();
		y12 = ofGetMouseY();
		a12 = 255;
	}if (count == 180) {
		text13 = WORDS[index];
		x13 = ofGetMouseX();
		y13 = ofGetMouseY();
		a13 = 255;
	}if (count == 195) {
		text14 = WORDS[index];
		x14 = ofGetMouseX();
		y14 = ofGetMouseY();
		a14 = 255;
	}if (count == 210) {
		text15 = WORDS[index];
		x15 = ofGetMouseX();
		y15 = ofGetMouseY();
		a15 = 255;
	}if (count == 225) {
		text16 = WORDS[index];
		x16 = ofGetMouseX();
		y16 = ofGetMouseY();
		a16 = 255;
	}if (count == 240) {
		text17 = WORDS[index];
		x17 = ofGetMouseX();
		y17 = ofGetMouseY();
		a17 = 255;
	}if (count == 255) {
		text18 = WORDS[index];
		x18 = ofGetMouseX();
		y18 = ofGetMouseY();
		a18 = 255;
	}if (count == 270) {
		text19 = WORDS[index];
		x19 = ofGetMouseX();
		y19 = ofGetMouseY();
		a19 = 255;
	}if (count == 285) {
		text20 = WORDS[index];
		x20 = ofGetMouseX();
		y20 = ofGetMouseY();
		a20 = 255;
	}
	
	
}

//--------------------------------------------------------------
void ofApp::draw() {
	
	
	if (0<count&&count<285) {
		if (225 < count&&count < 285) {
			a1 = a1 - 255 / 60;
		}
		ofSetColor(255, 255, 0,a1);
		myFont.drawString(text1, x1, y1);
	}
	if (15<count&&count<300) {
		if (240 < count&&count < 300) {
			a2 = a2 - 255 / 60;
		}
		ofSetColor(255, 255, 255,a2);
		myFont.drawString(text2, x2,y2);
	}
	if (0<count&&count<15||30<count&&count<300) {
		if (0<count&&count<15||255 < count&&count < 300) {
			a3 = a3 - 255 / 60;
		}
		ofSetColor(255, 255, 255,a3);
		myFont.drawString(text3, x3, y3);
	}
	if (0<count&&count<30 || 45<count&&count<300) {
		if (0 < count&&count < 30||270<count&&count<300) {
			a4 = a4 - 255 / 60;
		}
		ofSetColor(255, 255, 255,a4);
		myFont.drawString(text4, x4, y4);
	}
	if (0<count&&count<45 || 60<count&&count<300) {
		if (0 < count&&count <45||285<count&&count<300) {
			a5 = a5 - 255 / 60;
		}
		ofSetColor(255, 255, 255,a5);
		myFont.drawString(text5, x5, y5);
	}
	if (0<count&&count<60 || 75<count&&count<300) {
		if (0 < count&&count < 60) {
			a6 = a6 - 255 / 60;
		}
		ofSetColor(255, 255, 255,a6);
		myFont.drawString(text6, x6, y6);
	}
	if (0<count&&count<75 || 90<count&&count<300) {
		if (15 < count&&count < 75) {
			a7 = a7 - 255 / 60;
		}
		ofSetColor(255, 255, 255,a7);
		myFont.drawString(text7, x7, y7);
	}
	if (0<count&&count<90 || 105<count&&count<300) {
		if (30 < count&&count < 90) {
			a8 = a8 - 255 / 60;
		}
		ofSetColor(255, 255, 255,a8);
		myFont.drawString(text8, x8, y8);
	}
	if (0<count&&count<105 || 120<count&&count<300) {
		if (45 < count&&count < 105) {
			a9 = a9 - 255 / 60;
		}
		ofSetColor(255, 255, 255,a9);
		myFont.drawString(text9, x9, y9);
	}
	if (0<count&&count<120 || 135<count&&count<300) {
		if (60 < count&&count < 120) {
			a10 = a10 - 255 / 60;
		}
		ofSetColor(255, 255, 255,a10);
		myFont.drawString(text10, x10, y10);
	}
	if (0<count&&count<135 || 150<count&&count<300) {
		if ( 75< count &&count < 135) {
			a11 = a11 - 255 / 60;
		}
		ofSetColor(255, 255, 255,a11);
		myFont.drawString(text11, x11, y11);
	}
	if (0<count&&count<150 || 165<count&&count<300) {
		if (90 < count&&count < 150) {
			a12 = a12 - 255 / 60;
		}
		ofSetColor(255, 255, 255, a12);
		myFont.drawString(text12, x12, y12);
	}
	if (0<count&&count<165 || 180<count&&count<300) {
		if (105 < count&&count < 165) {
			a13 = a13 - 255 / 60;
		}
		ofSetColor(255, 255, 255, a13);
		myFont.drawString(text13, x13, y13);
	}
	if (0<count&&count<180 || 195<count&&count<300) {
		if (120 < count&&count < 180) {
			a14 = a14 - 255 / 60;
		}
		ofSetColor(255, 255, 255, a14);
		myFont.drawString(text14, x14, y14);
	}
	if (0<count&&count<195 || 210<count&&count<300) {
		if (135 < count&&count < 195) {
			a15 = a15 - 255 / 60;
		}
		ofSetColor(255, 255, 255, a15);
		myFont.drawString(text15, x15, y15);
	}
	if (0<count&&count<210 || 225<count&&count<300) {
		if (150 < count&&count < 210) {
			a16 = a16 - 255 / 60;
		}
		ofSetColor(255, 255, 255, a16);
		myFont.drawString(text16, x16, y16);
	}
	if (0<count&&count<225 || 240<count&&count<300) {
		if (165 < count&&count < 225) {
			a17 = a17 - 255 / 60;
		}
		ofSetColor(255, 255, 255, a17);
		myFont.drawString(text17, x17, y17);
	}
	if (0<count&&count<240 || 255<count&&count<300) {
		if (180 < count&&count < 240) {
			a18 = a18 - 255 / 60;
		}
		ofSetColor(255, 255, 255, a18);
		myFont.drawString(text18, x18, y18);
	}
	if (0<count&&count<255 || 270<count&&count<300) {
		if (195 < count&&count < 255) {
			a19 = a19 - 255 / 60;
		}
		ofSetColor(255, 255, 255, a19);
		myFont.drawString(text19, x19, y19);
	}
	if (0<count&&count<270 || 285<count&&count<300) {
		if (210 < count&&count < 270) {
			a20 = a20 - 255 / 60;
		}
		ofSetColor(255, 255, 255, a20);
		myFont.drawString(text20, x20, y20);
	}
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
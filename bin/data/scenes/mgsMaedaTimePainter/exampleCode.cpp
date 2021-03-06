createPath(currentPainter);

void createTimePainter(){
  if (longevity < 500) {
    angle += ofRandom([[Angle Variance]], [[Angle Variance]]));
  }
  
  xpos += cos([[Angle Variance]]) / speed;
  ypos += sin([[Angle Variance]]) / speed;
  
  longevity--;
  
  ofSetColor(stroke);
  ofFill();
  
  glLineWidth(lineWidth);
  
  path.begin();
  path.addVertex(ofPoint(xpos, ypos));
  path.end();
  path.draw();
  
  if (longevity == 0) {
    ofDrawEllipse(xpos, ypos, size*2, size*2);
  }
}
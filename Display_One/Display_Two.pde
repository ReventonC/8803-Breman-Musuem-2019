class ProjectorSketch extends PApplet {
  void setup() {
    //width
    button[2] = 200;
  
    //height
    button[3] = 200;
    
    //x
    button[0] = width/2 - button[2]/2;
    
    //y
    button[1] = height/2  - button[3]/2;
    
    //isClicked
    button[4] = 0;
  }
    
  void settings() {
    fullScreen();
  }
  
  void draw() {
    clear();
    background(230,230,250);
    fill(0);
    stroke(0);
    textSize(80);
    text("Display One", 100,100);
    text("x = " + mouseX + " y = " + mouseY, 100,200);
    text(Boolean.toString((mouseY<(button[1]+button[3]))&&(mouseY>(button[1]))), 100,300);
    text(Boolean.toString((mouseX<(button[0]+button[2]))&&(mouseX>(button[0]))), 100,400);
    text("click = " + button[4], 100, 500);
    fill(255,0,0);
    rect(button[0], button[1], button[2], button[3]);
  }
  
  void mousePressed()  {
    if((mouseY<(button[1]+button[3]))&&(mouseY>(button[1]))){
      if((mouseX<(button[0]+button[2]))&&(mouseX>(button[0]))){
        button[4]=1;
      }
    }
  }
}

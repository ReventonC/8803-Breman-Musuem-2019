class ProjectorSketch extends PApplet {
  void setup() {
    //width
    button[2] = 200;

    //height
    button[3] = 200;

    //x
    button[0] = width/2 - button[2]/2 - 400;

    //y
    button[1] = height/2  - button[3]/2;

    //isClicked
    button[4] = 0;

    //width
    button1[2] = 200;

    //height
    button1[3] = 200;

    //x
    button1[0] = width/2 - button[2]/2;

    //y
    button1[1] = height/2  - button[3]/2;

    //isClicked
    button1[4] = 0;

    //width
    button2[2] = 200;

    //height
    button2[3] = 200;

    //x
    button2[0] = width/2 - button[2]/2 + 400;

    //y
    button2[1] = height/2  - button[3]/2;

    //isClicked
    button2[4] = 0;
  }

  void settings() {
    fullScreen();
  }

  void draw() {
    clear();
    background(230, 230, 250);
    fill(0);
    stroke(0);
    textSize(80);
    text("Display One", 100, 100);
    text("x: " + mouseX + " y: " + mouseY, 100, 200);
    //text(Boolean.toString((mouseY<(button[1]+button[3]))&&(mouseY>(button[1]))), 100,300);
    //text(Boolean.toString((mouseX<(button[0]+button[2]))&&(mouseX>(button[0]))), 100,400);
    text("Button status: " + button[4] + " " + button1[4] + " " + button2[4] + " ", 100, 300);
    fill(255, 0, 0);
    rect(button[0], button[1], button[2], button[3]);
    fill(0, 255, 0);
    rect(button1[0], button1[1], button1[2], button1[3]);
    fill(0, 0, 255);
    rect(button2[0], button2[1], button2[2], button2[3]);
  }

  void mousePressed() {
    if ((mouseY<(button[1]+button[3]))&&(mouseY>(button[1]))) {
      if ((mouseX<(button[0]+button[2]))&&(mouseX>(button[0]))) {
        button1[4]=0;
        button2[4]=0;
        button[4]=1;
      }
    }
    if ((mouseY<(button1[1]+button1[3]))&&(mouseY>(button1[1]))) {
      if ((mouseX<(button1[0]+button1[2]))&&(mouseX>(button1[0]))) {
        button[4]=0;
        button2[4]=0;
        button1[4]=1;
      }
    }
    if ((mouseY<(button2[1]+button2[3]))&&(mouseY>(button2[1]))) {
      if ((mouseX<(button2[0]+button2[2]))&&(mouseX>(button2[0]))) {
        button1[4]=0;
        button[4]=0;
        button2[4]=1;
      }
    }
  }
}

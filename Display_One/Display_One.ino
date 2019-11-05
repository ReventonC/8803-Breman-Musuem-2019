import processing.video.*;
Movie myMovie0, myMovie1, myMovie2;
final PApplet projector = new ProjectorSketch();
int count = 0;
int[] button = new int[5];
int[] button1 = new int[5];
int[] button2 = new int[5];

void setup() {
  fullScreen();
  runSketch(new String[] {"--display=2", "--sketch-path=" + sketchPath(""), "Projector", }, projector);
  myMovie0 = new Movie(this, "test0.mp4");
  myMovie1 = new Movie(this, "test1.mp4");
  myMovie2 = new Movie(this, "test2.mp4");
  myMovie0.frameRate(60);
  myMovie1.frameRate(60);
  myMovie2.frameRate(60);
}

void settings() {
  fullScreen();
}

void draw() {
  //clear();
  background(0);
  textSize(80);
  fill(255);
  text("Display Two", 100, 100);

  if (button[4] == 1) {
    image(myMovie0, width/2-1500, 200, 1000, 1800);
    //text("clicked!", width/2, height/2);
    myMovie1.stop();
    myMovie2.stop();
    myMovie0.play();
  }
  if (button1[4] == 1) {
    image(myMovie1, width/2-500, 200, 1000, 1800);
    //text("clicked!", width/2, height/2);
    myMovie0.stop();
    myMovie2.stop();
    myMovie1.play();
  }
  if (button2[4] == 1) {
    image(myMovie2, width/2+500, 200, 1000, 1800);
    //text("clicked!", width/2, height/2);
    myMovie1.stop();
    myMovie0.stop();
    myMovie2.play();
  }
}

void movieEvent(Movie m) {
  m.read();
}

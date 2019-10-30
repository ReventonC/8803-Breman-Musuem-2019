import processing.video.*;
Movie myMovie;
final PApplet projector = new ProjectorSketch();
int count = 0;
int[] button = new int[5];

void setup() {
  fullScreen();
  runSketch(new String[] {"--display=2", "--sketch-path=" + sketchPath(""), "Projector", }, projector);
  myMovie = new Movie(this, "test.mp4");
  
}

void settings() {
  fullScreen();
}

void draw() {
  stroke(255,0,0);
  textSize(80);
  fill(0);
  text("Display Two", 100,100);
  fill(255,0,0);
  image(myMovie, 100, 200);
  if (button[4] == 1) {
    text("clicked!", width/2, height/2);
    myMovie.play();
  }
}

void movieEvent(Movie m) {
  m.read();
}
  

// Define the pins using the clear XIAO D-labels
const int redPin = D0;   
const int greenPin = D1; 
const int bluePin = D2;  

void setup() {
  // Initialize the digital pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  // Start with all lights turned OFF (LOW for common cathode)
  setRGB(LOW, LOW, LOW);
  delay(100);
}

void loop() {
  // 1.(RED LIGHT ON)
  setRGB(HIGH, LOW, LOW);
  delay(1000);

  // 2. (All LIGHTS OFF)
  setRGB(LOW, LOW, LOW);
  delay(1000);

  // 3.(GREEN LIGHT ON)
  setRGB(LOW, HIGH, LOW);
  delay(1000);

  // 4.(All LIGHTS OFF)
  setRGB(LOW, LOW, LOW);
  delay(1000);

  // 5.(BLUE LIGHT ON)
  setRGB(LOW, LOW, HIGH);
  delay(1000);

  // 6.(All LIGHTS OFF)
  setRGB(LOW, LOW, LOW);
  delay(1000);
}

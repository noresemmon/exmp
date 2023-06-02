#include <Adafruit_CircuitPlayground.h>

bool leftButtonPressed;
bool rightButtonPressed;

void setup() {
  CircuitPlayground.begin();
}

void loop() {
  leftButtonPressed = CircuitPlayground.leftButton();
  rightButtonPressed = CircuitPlayground.rightButton();

    if (rightButtonPressed && leftButtonPressed) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else { digitalWrite(LED_BUILTIN, LOW);
  }

  delay(1000);
}

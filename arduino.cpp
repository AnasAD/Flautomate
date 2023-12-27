// Define the class for controlling lights
class LightController {
  private:
    int lightPin;

  public:
    LightController(int pin) : lightPin(pin) {
      pinMode(lightPin, OUTPUT);
    }

    void turnOn() {
      digitalWrite(lightPin, HIGH);
      Serial.println("Lights turned on");
    }

    void turnOff() {
      digitalWrite(lightPin, LOW);
      Serial.println("Lights turned off");
    }
};

// Define the class for controlling electric curtains
class CurtainController {
  private:
    int curtainPin;

  public:
    CurtainController(int pin) : curtainPin(pin) {
      pinMode(curtainPin, OUTPUT);
    }

    void open() {
      digitalWrite(curtainPin, HIGH);
      Serial.println("Curtains opened");
    }

    void close() {
      digitalWrite(curtainPin, LOW);
      Serial.println("Curtains closed");
    }
};

// Define the class for controlling the coffee machine
class CoffeeMachineController {
  private:
    int coffeeMachinePin;

  public:
    CoffeeMachineController(int pin) : coffeeMachinePin(pin) {
      pinMode(coffeeMachinePin, OUTPUT);
    }

    void start() {
      digitalWrite(coffeeMachinePin, HIGH);
      Serial.println("Coffee machine started");
    }

    void stop() {
      digitalWrite(coffeeMachinePin, LOW);
      Serial.println("Coffee machine stopped");
    }
};

// Create instances of the controllers
LightController livingRoomLights(2);   // Replace '2' with the appropriate pin number
CurtainController bedroomCurtains(3);  // Replace '3' with the appropriate pin number
CoffeeMachineController kitchenCoffeeMachine(4);  // Replace '4' with the appropriate pin number

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Example usage
  livingRoomLights.turnOn();
  delay(2000);
  livingRoomLights.turnOff();
  delay(2000);

  bedroomCurtains.open();
  delay(2000);
  bedroomCurtains.close();
  delay(2000);

  kitchenCoffeeMachine.start();
  delay(5000);
  kitchenCoffeeMachine.stop();
  delay(2000);
}

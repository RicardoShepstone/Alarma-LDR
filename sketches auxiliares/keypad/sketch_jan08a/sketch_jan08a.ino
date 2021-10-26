#include <Keypad.h>
//declaración de keypad
const byte rows = 4; //cuatro filas
const byte cols = 3; //tres columnas
char keys[rows][cols] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'#','0','*'}
};
byte rowPins[rows] = {5, 4, 3, 2}; //connect to the row pinouts of the keypad
byte colPins[cols] = {6, 7, 8}; //connect to the column pinouts of the keypad
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, rows, cols );
void setup() {
 Serial.begin(9600);
}

void loop() {
char pulsacion = keypad.getKey() ;
                if (pulsacion != 0)              // Si el valor es 0 es que no se
                    Serial.println(pulsacion);

}

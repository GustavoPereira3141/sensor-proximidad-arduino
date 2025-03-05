const int trigPin = 9;  // Pin Trig del sensor HC-SR04
const int echoPin = 10; // Pin Echo del sensor HC-SR04
const int ledRojo = 3;  // LED rojo
const int ledVerde = 4; // LED verde

void setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(ledRojo, OUTPUT);
    pinMode(ledVerde, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    long duration;
    int distance;

    // Enviar pulso ultrasónico
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // Medir el tiempo que tarda el eco en volver
    duration = pulseIn(echoPin, HIGH);
    
    // Convertir el tiempo en distancia (cm)
    distance = duration * 0.034 / 2;
    
    Serial.print("Distancia: ");
    Serial.print(distance);
    Serial.println(" cm");

    // Encender el LED rojo si la distancia es menor a 10 cm
    if (distance < 10) {
        digitalWrite(ledRojo, HIGH);
        digitalWrite(ledVerde, LOW);
    } 
    // Encender el LED verde si la distancia es mayor o igual a 10 cm
    else {
        digitalWrite(ledRojo, LOW);
        digitalWrite(ledVerde, HIGH);
    }
    
    delay(500); // Pequeño retraso para estabilidad
}

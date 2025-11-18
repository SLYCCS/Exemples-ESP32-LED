// Definim constants per als pins
const int LED_PIN = 23;

// Variables configurables per als temps
const int TEMPS_ENCES = 1000;    // 1 segon ences
const int TEMPS_APAGAT = 500;    // 0.5 segons apagat

// La funció setup() s'executa un cop quan la placa arrenca
void setup() {
    // Configurem el pin del LED com una SORTIDA 
    pinMode(LED_PIN, OUTPUT);
    
    Serial.begin(115200);
    Serial.println("Programa LED Blink Configurable iniciat");
    Serial.print("Temps ENCES: ");
    Serial.print(TEMPS_ENCES);
    Serial.println(" ms");
    Serial.print("Temps APAGAT: ");
    Serial.print(TEMPS_APAGAT);
    Serial.println(" ms");
}

// La funció loop() s'executa contínuament
void loop() {
    // Encendre el LED
    digitalWrite(LED_PIN, HIGH);
    Serial.println("LED ENCÈS");
    delay(TEMPS_ENCES);    // Espera el tiempo configurado
    
    // Apagar el LED
    digitalWrite(LED_PIN, LOW);
    Serial.println("LED APAGAT");
    delay(TEMPS_APAGAT);   // Espera el tiempo configurado
}

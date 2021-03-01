

int sensorPin = A0;    // Selection du numéro de l'entrée analogique pour le détecteur d'humidité
int ledPin = 12;      // Selection du numéro de la sortie pour la LED
int sensorValue = 0;  // variable qui va stocker les valeures du détecteur d'humidité

void setup() {
 
  pinMode(ledPin, OUTPUT); // Définit le pin numéro 12 comme sortie
  
}

void loop() {
  
  sensorValue = analogRead(sensorPin); //Lecture des valeures du détecteur d'humidité pour la stocker dans la variable "sensorValue"

  while (sensorValue < 90){      //crée une boucle "tant que [sensorValue] est inférieur à 50, executer le code suivant : "
    digitalWrite(ledPin, HIGH);  //Allumer la LED
    delay(100);                 //Attendre 1 seconde
    digitalWrite(ledPin, LOW);   //Eteindre la LED
    delay(100);                 //Attendre 1 seconde
    sensorValue = analogRead(sensorPin);  //actualiser la valeur de sensorValue par le détecteur d'humidité
  }

  digitalWrite(ledPin, LOW);  //si sernsorValue est supérieur à 50 et donc que la terre est suffisamment humide, on garde la LED éteinte

}

int valEsquerda = 0;//variável para armazenar o valor analógic
int valMeio = 0;
int valDireita = 0; 
void setup() 
{
   Serial.begin(9600);// porta serial em 9600 bps
}

void loop() 
{
   valEsquerda = analogRead(2);// Lê o valor do sensor e o armazena na variável val.
   valMeio = analogRead(1);
   valDireita = analogRead(0);
   Serial.println("Valor Esquerda:"); // imprimir como um decimal
   Serial.println(valEsquerda);
   Serial.println("Valor Direita");
   Serial.println(valDireita);
   Serial.println("Valor Meio");  
   Serial.println(valMeio);
   delay(1000); // delay de 100 milissegundos antes da próxima leitura: 
   }


 int valEsquerda = 0;//variável para armazenar o valor analógic
  int valMeio = 0;
  int valDireita = 0; 

  
void setup() {
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  int valEsquerda = 0;//variável para armazenar o valor analógic
  int valMeio = 0;
  int valDireita = 0; 
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {

    
  
  valEsquerda = analogRead(2);// Lê o valor do sensor e o armazena na variável val.
  valMeio = analogRead(1);
  valDireita = analogRead(0);

  digitalWrite(2,HIGH);
  digitalWrite(4,LOW);

  if(valEsquerda < 800 && valMeio< 800){
    FrenteEsquerda();
  }
  else if (valDireita<800 && valMeio<800){
    FrenteEsquerda();
  

}


}
void FrenteEsquerda(){
digitalWrite(7,HIGH);
digitalWrite(6,LOW);}

 void ReEsquerda(){
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
}

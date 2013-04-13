int red, green, blue;

int RedPin = 2;
int GreenPin = 3;
int BluePin = 4;
int RedPin2 = 5;
int GreenPin2 = 6;
int BluePin2 = 7;

// choose the input pin for the pushbutton 1
// variable for reading the pin status
int inPin= 8;
int val = 0;

int inPin2 =9;
int val2 = 0;

void setup() {
  //setup code goes here
  //initializes the pins as outputs.
  pinMode(RedPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(BluePin, OUTPUT);
 
  pinMode(RedPin2, OUTPUT);
  pinMode(GreenPin2, OUTPUT);
  pinMode(BluePin2, OUTPUT);
  
  pinMode (inPin, INPUT); // declare the pushbutton as input
  pinMode (inPin2, INPUT); //same
  
  digitalWrite (RedPin,LOW);
  digitalWrite (GreenPin, LOW);
  digitalWrite (BluePin, LOW);
  digitalWrite (RedPin2,LOW);
  digitalWrite (GreenPin2, LOW);
  digitalWrite (BluePin2, LOW);
  

}
  void loop () {
    

    int Plate1= 45;
    int Plate2= 23;
  
    val = digitalRead(inPin); // read input value
    if (val == LOW) {  //check if input is HIGH button released
      digitalWrite(RedPin, LOW); // turn LEDs OFF
      digitalWrite (GreenPin, LOW);
      digitalWrite (BluePin, LOW); 
    }     
    
    
    else if (Plate1 > 50)
    {
      digitalWrite (RedPin, LOW);
      digitalWrite (GreenPin, HIGH);
      digitalWrite (BluePin, LOW);
    }
    else if (Plate1 <= 50 && Plate1 >= 25)
    {
      digitalWrite (GreenPin, HIGH);
      digitalWrite (RedPin, HIGH);
      digitalWrite (BluePin, LOW);
    }
    else if (Plate1 < 25)
    {
      digitalWrite (RedPin, HIGH);
      digitalWrite (GreenPin, LOW);
      digitalWrite (BluePin, LOW);
    }
  
    
    //second LED
    
        val2 = digitalRead(inPin2); // read input value
    if (val2 == LOW) {  //check if input is HIGH button released
      digitalWrite(RedPin2, LOW); // turn LEDs OFF
      digitalWrite (GreenPin2, LOW);
      digitalWrite (BluePin2, LOW); 
    }     
    
    
    else if (Plate2 > 50)
    {
      digitalWrite (RedPin2, LOW);
      digitalWrite (GreenPin2, HIGH);
      digitalWrite (BluePin2, LOW);
    }
    else if (Plate2 <= 50 && Plate2 >= 25)
    {
      digitalWrite (GreenPin2, HIGH);
      digitalWrite (RedPin2, HIGH);
      digitalWrite (BluePin2, LOW);
    }
    else if (Plate2 < 25)
    {
      digitalWrite (RedPin2, HIGH);
      digitalWrite (GreenPin2, LOW);
      digitalWrite (BluePin2, LOW);
    }
  }
  
//same thing for plate 2

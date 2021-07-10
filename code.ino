char data_serial;

void setup () {  
  Serial.begin(9600); }
  
void loop () {
  if (Serial.available () > 0) {
    data_serial = Serial.read();
    Serial.println(data_serial);
    
    if (data_serial == 'l') {
      analogWrite (6, 180);
      analogWrite (9, 0);
      
      analogWrite (3, 180);
      analogWrite (5, 0);
      }
      
     if (data_serial  ==  'r')  {
        analogWrite (6, 0) ;
        analogWrite (9, 180);
        
        analogWrite (3, 0) ;
        analogWrite (5, 180) ; 
      }
      
      if (data_serial  ==  'd')  {
        analogWrite (6, 0) ;
        analogWrite (9, 180) ;
        
        analogWrite (3, 180) ;
        analogWrite (5, 0) ; 
      }

      if (data_serial  ==  'u')  {
        analogWrite (6, 180) ;
        analogWrite (9, 0) ;
        
        analogWrite (3, 0) ;
        analogWrite (5, 180) ; 
      }
      
      if (data_serial  ==  's')  {
        analogWrite (6, 0) ;
        analogWrite (9, 0) ;
      
        analogWrite (3, 0) ;
        analogWrite (5, 0) ;  
      }
  }
}

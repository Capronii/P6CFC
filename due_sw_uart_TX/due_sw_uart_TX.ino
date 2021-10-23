void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);    // 12 como pino output
}

void loop() {

  //seta high
  digitalWrite(12, HIGH);
  _sw_uart_wait_T();

  //Inicia transmissão
  digitalWrite(12, LOW); 
  _sw_uart_wait_T();

  //Mandando bytes
  digitalWrite(12, HIGH); 
  _sw_uart_wait_T();

  digitalWrite(12, HIGH);
  _sw_uart_wait_T();

  digitalWrite(12, HIGH); 
  _sw_uart_wait_T();

  digitalWrite(12, LOW);
  _sw_uart_wait_T();

  digitalWrite(12, LOW);
  _sw_uart_wait_T();

  digitalWrite(12, LOW); 
  _sw_uart_wait_T();

  digitalWrite(12, HIGH);
  _sw_uart_wait_T();

  digitalWrite(12, LOW); 
  _sw_uart_wait_T();

  digitalWrite(12, LOW);
  _sw_uart_wait_T();

  digitalWrite(12, HIGH);
  delay(2000);
}

void _sw_uart_wait_half_T() {
  for(int i = 0; i < 1093; i++)
    asm("NOP");
}

void _sw_uart_wait_T() {
  _sw_uart_wait_half_T();
  _sw_uart_wait_half_T();
}
  

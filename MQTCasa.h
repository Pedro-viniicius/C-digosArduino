#ifndef CLASSES_CASA
#define CLASSES_CASA


#include "Arduino.h"

class Sensor{
protected:
  int _pin;
public:
  
  void definir_entrada (int pin);
  void  deinir_saida (int pin);
  
};



class Sensor_humidade : public Sensor {
private:

  double value;
  int porcent;

public:
  
  int leitura_humidade();
};


class Sensor_rele : public Sensor {

public:
int AtivaRele();

};

class 

#endif
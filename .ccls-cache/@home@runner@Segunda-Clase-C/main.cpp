#include <iostream>

//Clase Persona
class Persona{
  //Encapsulamiento del objeto
  private:
    //Atributos del objeto
    int edad;
    std::string nombre;
  //Metodos del objeto
  public:
    //Metodo constructor del objeto
    Persona(int,std::string);
    //Metodos del objeto
    void leer();
    void correr();
};

//Metodo Constructor de la clase Persona (Sirve para inicializar los atributo privados de la clase)
Persona::Persona(int _edad, std::string _nombre){
  edad=_edad;
  nombre=_nombre;
}

//Metodo Leer de la clase Persona
void Persona::leer(){
  std::cout<<"Soy "<<nombre<<" y estoy leyendo un libro\n"<<std::endl;
}

//Metodo Correr de la clase Persona
void Persona::correr(){
  std::cout<<"Soy "<<nombre<< " y estoy corriendo una maraton y tengo "<<edad<<" años\n"<<std::endl;
}

int main() {
//Creando los objetos de p1,p2,p3 de la clase Persona
  Persona p1=Persona(20,"Alejandro");
  Persona p2(19,"Maria");
  Persona p3(21,"Juan");

//Se llaman los Metodos para cada objeto
  
  //Se llama el metodo leer para el objeto p1
  p1.leer();

  //Se llama el metodo correr para el objeto p2
  p2.correr();

  //Se llama el metodo leer y correr para el objeto p3
  p3.leer();
  p3.correr();

  return 0;
}
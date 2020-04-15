//
// Created by jorge on 14/4/20.
//

void ejercicio_5a(){
    cout<<"\t===Ejercicio 5a==="<<endl;
    Integer Obj_A;
    cout<<"Se crea objeto Obj_A sin valor: "<<Obj_A<<endl;
    Integer Obj_B(5);
    cout<<"Se crea objeto Obj_B con valor: "<<Obj_B<<endl;
    Obj_A = Obj_B;
    cout<<"Operador = sobrecargado, Obj_A = Obj_B, el valor de Obj_A es: "<<Obj_A<<endl;
    Obj_A = Obj_A + 5;
    cout<<"Operador + sobrecargado, Obj_A = Obj_A + 5, el valor de Obj_A es: "<<Obj_A<<endl;
    Obj_B = Obj_B + Obj_A;
    cout<<"Operador + sobrecargado, Obj_B = Obj_B + Obj_A, el valor de Obj_B es: "<<Obj_B<<endl;
    Integer Obj_C(Obj_A);
    cout<<"Se crea objeto Obj_C con el valor de Obj_A, el valor de Obj_C es: "<<Obj_C<<endl;
    Integer Obj_D;
    cout<<"Ingrese un valor para Obj_D: ";cin>>Obj_D;
    Integer tmp(Obj_D);
    Obj_D = Obj_D^0;
    cout<<"Obj_D^0 es: "<<Obj_D<<endl;
    Obj_D = tmp;
    Obj_D = Obj_D^1;
    cout<<"Obj_D^1 es: "<<Obj_D<<endl;
    Obj_D = tmp;
    Obj_D = Obj_D^3;
    cout<<"Obj_D^3 es: "<<Obj_D<<endl;
    Obj_D = tmp;
    Obj_D = Obj_D^7;
    cout<<"Obj_D^7 es: "<<Obj_D<<endl;
    cout<<"\texecuted successfully"<<endl;
}
void ejercicio_5b(){
    cout<<"\t===Ejercicio 5b==="<<endl;
    cout<<"\texecuted successfully"<<endl;
}
void ejercicio_6(){}
#include <iostream>
#include <vector>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <string>
#include <ctime>
#include <fstream>

#define del "|"

using namespace std;

class Proceso
{
private:

    int id;
    int lote;
    int numero1;
    int numero2;
    string operacion;
    int tme;
    float resultado;
    string resultadoError;
    string estado;
    int TT;
    int TR;

    int TTB;

    int llegada;
    int finalizacion;
    int espera;
    int servicio;
    int retorno;
    int respuesta;
    int bandRes;

    int tamanio;
    int marco;
    string mb;
    int cos;
    int res;


public:

    Proceso();

    void setID(int valor);
    int getID() const;

    void setLote(int valor);
    int getLote() const;

    void setNumero1(int valor);
    int getNumero1() const;

    void setNumero2(int valor);
    int getNumero2() const;

    void setOperacion(const string valor);
    string getOperacion() const;

    void setTME(int valor);
    int getTME() const;

    void setResultado(float valor);
    float getResultado() const;

    void setResultadoError(const string valor);
    string getResultadoError() const;

    void setEstado(const string valor);
    string getEstado() const;

    void setTT(int valor);
    int getTT() const;

    void setTR(int valor);
    int getTR() const;

    void setTTB(int valor);
    int getTTB() const;

    void setLlegada(int valor);
    int getLlegada() const;

    void setFinalizacion(int valor);
    int getFinalizacion() const;

    void setEspera(int valor);
    int getEspera() const;

    void setServicio(int valor);
    int getServicio() const;

    void setRetorno(int valor);
    int getRetorno() const;

    void setRespuesta(int valor);
    int getRespuesta() const;

    void setBandRes(int valor);
    int getBandRes() const;

    void setTamanio(int valor);
    int getTamanio() const;

    void setMarco(int valor);
    int getMarco() const;

    void setMB(const string valor);
    string getMB() const;

    void setCos(int valor);
    int getCos() const;

    void setRes(int valor);
    int getRes() const;

    friend ostream& operator <<(ostream& os, const Proceso& obj);
};

Proceso::Proceso()
{

}

void Proceso::setID(int valor)
{
    id = valor;
}

int Proceso::getID() const
{
    return id;
}

void Proceso::setLote(int valor)
{
    lote = valor;
}

int Proceso::getLote() const
{
    return lote;
}

void Proceso::setNumero1(int valor)
{
    numero1 = valor;
}

int Proceso::getNumero1() const
{
    return numero1;
}

void Proceso::setNumero2(int valor)
{
    numero2 = valor;
}

int Proceso::getNumero2() const
{
    return numero2;
}

void Proceso::setOperacion(const string valor)
{
    operacion = valor;
}

string Proceso::getOperacion() const
{
    return operacion;
}

void Proceso::setTME(int valor)
{
    tme = valor;
}

int Proceso::getTME() const
{
    return tme;
}

void Proceso::setResultado(float valor)
{
    resultado = valor;
}

float Proceso::getResultado() const
{
    return resultado;
}

void Proceso::setResultadoError(const string valor)
{
    resultadoError = valor;
}

string Proceso::getResultadoError() const
{
    return resultadoError;
}

void Proceso::setEstado(const string valor)
{
    estado = valor;
}

string Proceso::getEstado() const
{
    return estado;
}

void Proceso::setTT(int valor)
{
    TT = valor;
}

int Proceso::getTT() const
{
    return TT;
}

void Proceso::setTR(int valor)
{
    TR = valor;
}

int Proceso::getTR() const
{
    return TR;
}

void Proceso::setTTB(int valor)
{
    TTB = valor;
}

int Proceso::getTTB() const
{
    return TTB;
}

void Proceso::setLlegada(int valor)
{
    llegada = valor;
}

int Proceso::getLlegada() const
{
    return llegada;
}

void Proceso::setFinalizacion(int valor)
{
    finalizacion = valor;
}

int Proceso::getFinalizacion() const
{
    return finalizacion;
}

void Proceso::setEspera(int valor)
{
    espera = valor;
}

int Proceso::getEspera() const
{
    return espera;
}

void Proceso::setServicio(int valor)
{
    servicio = valor;
}

int Proceso::getServicio() const
{
    return servicio;
}

void Proceso::setRetorno(int valor)
{
    retorno = valor;
}

int Proceso::getRetorno() const
{
    return retorno;
}

void Proceso::setRespuesta(int valor)
{
    respuesta = valor;
}

int Proceso::getRespuesta() const
{
    return respuesta;
}

void Proceso::setBandRes(int valor)
{
    bandRes = valor;
}

int Proceso::getBandRes() const
{
    return bandRes;
}

void Proceso::setTamanio(int valor)
{
    tamanio = valor;
}

int Proceso::getTamanio() const
{
    return tamanio;
}

void Proceso::setMarco(int valor)
{
    marco = valor;
}

int Proceso::getMarco() const
{
    return marco;
}

void Proceso::setMB(const string valor)
{
    mb = valor;
}

string Proceso::getMB() const
{
    return mb;
}

void Proceso::setCos(int valor)
{
    cos = valor;
}

int Proceso::getCos() const
{
    return cos;
}

void Proceso::setRes(int valor)
{
    res = valor;
}

int Proceso::getRes() const
{
    return res;
}

ostream &operator <<(ostream& os, const Proceso& obj)
{
    os <<obj.getID() <<del <<obj.getOperacion() <<del
        <<obj.getTamanio() <<del <<obj.getTME() <<del <<endl;

    return os;
}

void gotoxy(int x,int y)
{
  HANDLE hcon;
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD dwPos;
  dwPos.X = x;
  dwPos.Y= y;
  SetConsoleCursorPosition(hcon,dwPos);
}

class Proyecto
{
private:
    vector<Proceso> procesos;
    vector<Proceso> listos;
    vector<Proceso> bloqueados;
    vector<Proceso> terminados;
    vector<Proceso> tabla;
    vector<Proceso> tablaPag;
    vector<Proceso> suspendidos;

    Proceso p;
    Proceso n;
    Proceso listo;
    Proceso nuevo;
    Proceso capacidad;
    Proceso vacio;
    Proceso res;
    Proceso nulo;
    Proceso tiempo;
    Proceso auxFinal;
    Proceso retorno;
    Proceso tecla;

    Proceso term;
    Proceso bloq;
    Proceso list;
    Proceso susp;

    Proceso termP;
    Proceso bloqP;
    Proceso listP;
    Proceso nada;

    Proceso arch;
    Proceso primeroBloq;

    int cordYGlobal = 8;
    int contadorGlobal = 0;
    int idLimpieza = 1, bandPrimero = 0;
    int procesosPendientes;
    int idGlobal;
    int quantum;
    int primeraLLam = 0;
    int contSuspendidos = 0;
    bool bandVacio = true;

public:
    Proyecto();

    void Inicio();
    void PrimerosProcesos();
    void Listos(int idLimpieza);
    void Bloqueados();
    void NuevoProceso();
    void MostrarTabla();
    void ProcesoEjecucion();
    void ProcesosTerminados(int idAux, bool error, int TT);
    void Interfaz();
    void TablaPaginas();
    void TeclasPag(int idAux, string estado);
    void Suspendidos();
    void Regreso();
};

Proyecto::Proyecto()
{

}

void Proyecto::Inicio()
{
    int NumProcesos, salir = 0;
    int id, idAux, lote, numero1, numero2, tme, tt = 0, tr, ttb = 0, contAuxLote = 1, contLote = 1, lotesPendientes;
    int loteRevisar = 1;
    int DESDE = 6, HASTA = 16; // Tiempo maximo estimado de ejecucion de un proceso
    int DESDE_N = 0, HASTA_N = 10; // Numeros aleatorios para las operaciones
    int DESDE_O = 1, HASTA_O = 5; // Rango de numeros aleatorios para indicar la operacion a realizar
    int DESDE_T = 6, HASTA_T = 28; // Rango de numeros aleatorios para el tamaño de los procesos
    int num_op, tamanio, cos, res;
    string operacion, cNumero1, cNumero2, cOperacion;
    float resultado;
    Proceso pro;

    srand(time(NULL));

    cout << "Introduce el numero de procesos a realizar: " << endl;
    cin >> NumProcesos;

    cout << "Introduce el valor del Quantum: " << endl;
    cin >> quantum;

    do
    {
        system("cls");

        bool bandOperacion = true, bandTME = true;
        id = salir + 1;

        num_op = DESDE_O + rand()%(HASTA_O+1-DESDE_O);

        if(num_op == 1){
            cOperacion = "+";
        }else if (num_op == 2){
            cOperacion = "-";
        }else if (num_op == 3){
            cOperacion = "*";
        }else if (num_op == 4){
            cOperacion = "/";
        }else if (num_op == 5){
            cOperacion = "%";
        }

        numero1 = DESDE_N + rand()%(HASTA_N+1-DESDE_N);
        numero2 = DESDE_N + rand()%(HASTA_N+1-DESDE_N);

        tamanio = DESDE_T + rand()%(HASTA_T+1-DESDE_T);
        cos = tamanio/5;
        res = tamanio%5;

        operacion = to_string(numero1) + cOperacion + to_string(numero2);

        if(cOperacion == "+"){
            resultado = numero1 + numero2;
        }else if (cOperacion == "-"){
            resultado = numero1 - numero2;
        }else if (cOperacion == "*"){
            resultado = numero1 * numero2;
        }else if (cOperacion == "/"){
            if(numero2 == 0){
                bandOperacion = false;
            }else{
                resultado = numero1 / numero2;
            }
        }else if (cOperacion == "%"){
            if(numero2 == 0){
                bandOperacion = false;
            }else{
                resultado = numero1 % numero2;
            }
        }

        if(bandOperacion == true){
            tme = DESDE + rand()%(HASTA+1-DESDE);
            if(tme <= 0){
                bandTME = false;
            }

            if(bandTME == true){
                tr = tme;
                p.setID(id);
                p.setLote(contLote);
                p.setOperacion(operacion);
                p.setTME(tme);
                p.setResultado(resultado);
                p.setTT(tt);
                p.setTR(tr);
                p.setTTB(ttb);
                p.setBandRes(0);

                p.setLlegada(0);
                p.setFinalizacion(0);
                p.setRetorno(0);
                p.setEspera(0);
                p.setServicio(0);
                p.setRespuesta(0);

                p.setTamanio(tamanio);
                p.setCos(cos);
                p.setRes(res);

                if(procesos.empty()){
                    procesos.push_back(p);

                    if(contAuxLote % 5 == 0){
                        contLote++;
                    }
                    contAuxLote++;
                    salir++;

                }else{
                    bool band = true, bandID = true;
                    size_t i(0);

                    while(band!=false){
                        pro = procesos[i];

                        idAux = pro.getID();

                        if(id == idAux){
                            band = false;
                            bandID = false;
                        }
                        if(i>=procesos.size()-1)
                        {
                            band = false;
                        }
                        i++;
                    }
                    i = 0;
                    if(bandID == true){
                        procesos.push_back(p);

                        if(contAuxLote % 5 == 0){
                            contLote++;
                        }
                        contAuxLote++;
                        salir++;
                        band = false;
                    }
                }
            }
        }
    }while(salir!=NumProcesos);

    system("cls");

    idGlobal = NumProcesos;

    NumProcesos-=4;
    procesosPendientes = NumProcesos - 1;

    if(procesosPendientes < 0){
        procesosPendientes = 0;
    }

    gotoxy(0, 0);
    cout << "*******************************************************************************************************************************************************" << endl;
    gotoxy(0, 1);
    cout << "Numero de procesos nuevos: " << "  " << "                 " << "Quantum: " << "  " << endl;
    gotoxy(0, 1);
    cout << "Numero de procesos nuevos: " << procesosPendientes << "                 " << "Quantum: " << quantum << endl;
    gotoxy(0, 2);
    cout << "*******************************************************************************************************************************************************" << endl;

    Interfaz();

    gotoxy(0, 45);
    system("pause");
    PrimerosProcesos();
    TablaPaginas();

    ProcesoEjecucion();

    gotoxy(0, 46);
    cout << "                                               " << endl;

    gotoxy(70, 7);
    cout << "        " << endl;
    gotoxy(70, 8);
    cout << "        " << endl;
    gotoxy(70, 9);
    cout << "        " << endl;
    gotoxy(70, 10);
    cout << "        " << endl;
    gotoxy(70, 11);
    cout << "        " << endl;
    gotoxy(70, 12);
    cout << "        " << endl;
    gotoxy(70, 13);
    cout << "        " << endl;

    cordYGlobal += 15;
    gotoxy(85, cordYGlobal);
    cout << "------------------------------" << endl;

    gotoxy(0, 45);
    system("pause");

    size_t cont(0);
    bool bandFinal = true;
    int cordenadaFinalY = 48;
    int llegada, finalizacion, espera, servicio, retorno, respuesta, TRB;
    string estado, error;

    while(bandFinal!=false){
        p = terminados[cont];

        id = p.getID();
        llegada = p.getLlegada();
        finalizacion = p.getFinalizacion();
        espera = p.getEspera();
        servicio = p.getTT();
        retorno = p.getRetorno();
        respuesta = p.getRespuesta();

        estado = p.getEstado();
        TRB = 6 - p.getTTB();
        error = p.getResultadoError();
        resultado = p.getResultado();
        operacion = p.getOperacion();
        tme = p.getTME();

        tamanio = p.getTamanio();

        gotoxy(0, cordenadaFinalY);
        cout << "ID: " << id << endl;
        cordenadaFinalY++;
        gotoxy(0, cordenadaFinalY);
        cout << "Estado: " << estado << endl;
        cordenadaFinalY++;
        gotoxy(0, cordenadaFinalY);
        cout << "TME: " << tme << endl;
        cordenadaFinalY++;
        gotoxy(0, cordenadaFinalY);
        cout << "Operacion: " << operacion << endl;
        cordenadaFinalY++;
        gotoxy(0, cordenadaFinalY);
        cout << "Tamano: " << tamanio << endl;
        cordenadaFinalY++;

        if(error == "Error"){
            gotoxy(0, cordenadaFinalY);
            cout << "Terminado por error, resultado: " << "Error" << endl;
            cordenadaFinalY++;
        }else{
            gotoxy(0, cordenadaFinalY);
            cout << "Terminado normalmente, resultado: " << resultado << endl;
            cordenadaFinalY++;
        }

        if(estado == "Bloqueado"){
            gotoxy(0, cordenadaFinalY);
            cout << "Tiempo restante en bloqueado: " << TRB << endl;
            cordenadaFinalY++;
        }else{
            gotoxy(0, cordenadaFinalY);
            cout << "Tiempo restante en bloqueado: " << 0 << endl;
            cordenadaFinalY++;
        }

        gotoxy(0, cordenadaFinalY);
        cout << "Llegada: " << llegada << endl;
        cordenadaFinalY++;
        gotoxy(0, cordenadaFinalY);
        cout << "Finalizacion: " << finalizacion << endl;
        cordenadaFinalY++;
        gotoxy(0, cordenadaFinalY);
        cout << "Espera: " << espera << endl;
        cordenadaFinalY++;
        gotoxy(0, cordenadaFinalY);
        cout << "Servicio: " << servicio << endl;
        cordenadaFinalY++;
        gotoxy(0, cordenadaFinalY);
        cout << "Retorno: " << retorno << endl;
        cordenadaFinalY++;
        gotoxy(0, cordenadaFinalY);
        cout << "Tiempo restante en CPU: " << endl;
        cordenadaFinalY++;
        gotoxy(0, cordenadaFinalY);
        cout << "Respuesta: " << respuesta << endl;
        cordenadaFinalY++;
        gotoxy(0, cordenadaFinalY);
        cout << "-------------------------------------------" << endl << endl;
        cordenadaFinalY++;


        if(cont>=terminados.size()-1)
        {
            bandFinal = false;
        }
        cont++;
    }

    gotoxy(0, cordenadaFinalY);
    cout << "--------------------------------- Presione una tecla para terminar ---------------------------- " << endl;
    getchar();
}

void Proyecto::Interfaz()
{
    gotoxy(0, 5);
    cout << "Listos" << endl;
    gotoxy(0, 6);
    cout << "*********************************************" << endl;
    gotoxy(0, 7);
    cout << "ID" << "\t" << "\t" << "TME" << "\t" << "\t" << "TT" << endl;
    gotoxy(0, 8);
    cout << "*********************************************" << endl;

    gotoxy(0, 20);
    cout << "*********************************************" << endl;

    gotoxy(0, 23);
    cout << "Bloqueados" << endl;
    gotoxy(0, 24);
    cout << "*********************************************" << endl;
    gotoxy(0, 25);
    cout << "ID" << "\t" << "\t" << "TTB" << endl;
    gotoxy(0, 26);
    cout << "*********************************************" << endl;

    gotoxy(0, 38);
    cout << "*********************************************" << endl;

    gotoxy(0, 39);
    cout << "Contador: " << endl;
    gotoxy(10, 39);
    cout << contadorGlobal << endl;

    gotoxy(50, 5);
    cout << "Proceso En Ejecucion" << endl;
    gotoxy(50, 6);
    cout << "********************************" << endl;
    gotoxy(50, 7);
    cout << "ID: " << endl;
    gotoxy(50, 8);
    cout << "Operacion: " << endl;
    gotoxy(50, 9);
    cout << "Tamano: " << endl;
    gotoxy(50, 10);
    cout << "TME: " << endl;
    gotoxy(50, 11);
    cout << "TT: " << endl;
    gotoxy(50, 12);
    cout << "TR: " << endl;
    gotoxy(50, 13);
    cout << "Quantum: " << endl;

    gotoxy(50, 14);
    cout << "********************************" << endl;

    gotoxy(50, 18);
    cout << "Numero de procesos suspendidos: " << contSuspendidos << endl;

    gotoxy(50, 20);
    cout << "Proceso a regresar" << endl;
    gotoxy(50, 21);
    cout << "*******************************" << endl;
    gotoxy(50, 22);
    cout << "ID: " << endl;
    gotoxy(50, 23);
    cout << "Tamano: " << endl;

    gotoxy(85, 5);
    cout << "Terminados" << endl;
    gotoxy(85, 6);
    cout << "********************************" << endl;
    gotoxy(85, 7);
    cout << "ID" << "\t" << "Operacion" << "\t" << "Resultado" << endl;

    gotoxy(120, 5);
    cout << "Tabla de paginas" << endl;
    gotoxy(120, 6);
    cout << "********************************" << endl;
    gotoxy(120, 7);
    cout << "Marco" << "\t" << "Tamano" << "\t" << "ID" << "\t" << "Estado" << endl;

    gotoxy(60, 1);
    cout << "Proceso siguiente: " << endl;
    gotoxy(80, 1);
    cout << "ID: " << "\t" << "   Tam: " << endl;
}

void Proyecto::PrimerosProcesos()
{
    int tme, tt, id;
    size_t i(0);
    bool band = true;

    int cordY = 9;

    while(band!=false){
        gotoxy(0, cordY);
        cout << "          " << "\t" << "            " << "\t" << "            " << endl;

        cordY++;

        if(i>=procesos.size()-1)
        {
            band = false;
        }
        i++;
    }

    cordY = 9;
    i = 0;
    band = true;

    while(band!=false){
        p = procesos[i];
        p.setLlegada(contadorGlobal);
        listos.push_back(p);

        id = p.getID();
        tme = p.getTME();
        tt = p.getTT();

        gotoxy(0, cordY);
        cout << id << "\t" << "\t" << tme << "\t" << "\t" << tt << endl;

        cordY++;
        bandPrimero++;

        if(i>=procesos.size()-1)
        {
            band = false;
        }
        i++;
    }
    procesos.clear();
}

void Proyecto::Listos(int idLimpieza)
{
    int contQuinto = 0, tme, tt, id;
    size_t i(0);
    bool band = true;

    int cordY = 9;

    while(band!=false){
        gotoxy(0, cordY);
        cout << "          " << "\t" << "            " << "\t" << "            " << endl;

        cordY++;

        if(i>=10)
        {
            band = false;
        }
        i++;
    }

    cordY = 9;
    i = 0;
    band = true;

    while(band!=false){
        p = listos[i];

        id = p.getID();
        tme = p.getTME();
        tt = p.getTT();

        if(i > idLimpieza){

            gotoxy(0, cordY);
            cout << id << "\t" << "\t" << tme << "\t" << "\t" << tt << endl;

            cordY++;
        }
        if(i>=listos.size()-1)
        {
            band = false;
        }
        i++;
    }
}

void Proyecto::Bloqueados()
{
    int ttb, id;
    size_t i(0);
    bool band = true;

    int cordY = 27;

    while(band!=false){
        p = bloqueados[i];

        id = p.getID();
        ttb = p.getTTB();

        if(i == 0 && ttb == 6){
            ttb = 0;
            p.setTTB(ttb);
            nulo = listos[0];

            if(nulo.getID() == 0){
                nulo.setResultado(1);
                listos[0] = nulo;
                listos.push_back(p);
            }else{
                listos.push_back(p);
                TeclasPag(id, "Listo    ");
            }

            for(int CL = 0; CL < bloqueados.size()-1; CL++){
                n = bloqueados[CL+1];
                bloqueados[CL] = n;
            }
            bloqueados.pop_back();

            if(!bloqueados.empty()){
                p = bloqueados[i];
                id = p.getID();
                ttb = p.getTTB();
            }
        }

        gotoxy(0, cordY);
        cout << id << "\t" << "\t" << ttb << endl;

        cordY++;

        if(!bloqueados.empty()){
            ttb++;
            p.setTTB(ttb);

            bloqueados[i] = p;
        }else{
            i = bloqueados.size()-1;
        }

        if(i>=bloqueados.size()-1)
        {
            band = false;
        }
        i++;
    }
}

void Proyecto::NuevoProceso()
{
    int NumProcesos, salir = 0;
    int id, idAux, lote, numero1, numero2, tme, tt = 0, tr, ttb = 0, contAuxLote = 1, contLote = 1, lotesPendientes;
    int loteRevisar = 1, DESDE = 6, HASTA = 15, DESDE_N = 0, HASTA_N = 9, DESDE_O = 1, HASTA_O = 5, DESDE_T = 5, HASTA_T = 25;
    int num_op, tamanio, cos, res;
    string operacion, cNumero1, cNumero2, cOperacion;
    float resultado;
    Proceso pro;

    srand(time(NULL));

    NumProcesos = idGlobal + 1;
    salir = idGlobal;

    do
    {
        bool bandOperacion = true, bandTME = true;
        id = salir + 1;

        num_op = DESDE_O + rand()%(HASTA_O+1-DESDE_O);

        if(num_op == 1){
            cOperacion = "+";
        }else if (num_op == 2){
            cOperacion = "-";
        }else if (num_op == 3){
            cOperacion = "*";
        }else if (num_op == 4){
            cOperacion = "/";
        }else if (num_op == 5){
            cOperacion = "%";
        }

        numero1 = DESDE_N + rand()%(HASTA_N+1-DESDE_N);
        numero2 = DESDE_N + rand()%(HASTA_N+1-DESDE_N);

        tamanio = DESDE_T + rand()%(HASTA_T+1-DESDE_T);
        cos = tamanio/5;
        res = tamanio%5;

        operacion = to_string(numero1) + cOperacion + to_string(numero2);

        if(cOperacion == "+"){
            resultado = numero1 + numero2;
        }else if (cOperacion == "-"){
            resultado = numero1 - numero2;
        }else if (cOperacion == "*"){
            resultado = numero1 * numero2;
        }else if (cOperacion == "/"){
            if(numero2 == 0){
                bandOperacion = false;
            }else{
                resultado = numero1 / numero2;
            }
        }else if (cOperacion == "%"){
            if(numero2 == 0){
                bandOperacion = false;
            }else{
                resultado = numero1 % numero2;
            }
        }

        if(bandOperacion == true){
            tme = DESDE + rand()%(HASTA+1-DESDE);
            if(tme <= 0){
                bandTME = false;
            }

            if(bandTME == true){
                tr = tme;
                p.setID(id);
                p.setLote(contLote);
                p.setOperacion(operacion);
                p.setTME(tme);
                p.setResultado(resultado);
                p.setTT(tt);
                p.setTR(tr);
                p.setTTB(ttb);
                p.setBandRes(0);

                p.setLlegada(0);
                p.setFinalizacion(0);
                p.setRetorno(0);
                p.setEspera(0);
                p.setServicio(0);
                p.setRespuesta(0);

                p.setTamanio(tamanio);
                p.setCos(cos);
                p.setRes(res);

                if(procesos.empty()){
                    procesos.push_back(p);

                    if(contAuxLote % 5 == 0){
                        contLote++;
                    }
                    contAuxLote++;
                    salir++;

                }else{
                    bool band = true, bandID = true;
                    size_t i(0);

                    while(band!=false){
                        pro = procesos[i];

                        idAux = pro.getID();

                        if(id == idAux){
                            band = false;
                            bandID = false;
                        }
                        if(i>=procesos.size()-1)
                        {
                            band = false;
                        }
                        i++;
                    }
                    i = 0;
                    if(bandID == true){
                        procesos.push_back(p);

                        if(contAuxLote % 5 == 0){
                            contLote++;
                        }
                        contAuxLote++;
                        salir++;
                        band = false;
                    }
                }
            }
        }
    }while(salir!=NumProcesos);


    idGlobal++;
}

void Proyecto::MostrarTabla()
{
    int id, idAux;
    size_t i(0), x(0), z(0), y(0), t(0), s(0);
    bool band = true, band2 = true, band3 = true, band4 = true, band5 = true, band6 = true;

    tabla.clear();

    if(!terminados.empty()){
        while(band2!=false){
            term = terminados[x];

            term.setEstado("Terminado");
            tabla.push_back(term);

            if(x>=terminados.size()-1)
            {
                band2 = false;
            }
            x++;
        }
    }

    if(!bloqueados.empty()){
        while(band3!=false){
            bloq = bloqueados[z];

            bloq.setEstado("Bloqueado");
            tabla.push_back(bloq);

            if(z>=bloqueados.size()-1)
            {
                band3 = false;
            }
            z++;
        }
    }

    if(!suspendidos.empty()){
        while(band6!=false){
            susp = suspendidos[s];

            susp.setEstado("Suspendido");
            tabla.push_back(susp);

            if(s>=suspendidos.size()-1)
            {
                band6 = false;
            }
            s++;
        }
    }

    if(!listos.empty()){
        while(band4!=false){
            list = listos[y];

            if(y == 0){
                list.setEstado("Ejecucion");
                tabla.push_back(list);
            }else{
                list.setEstado("Listo    ");
                tabla.push_back(list);
            }

            if(y>=listos.size()-1)
            {
                band4 = false;
            }
            y++;
        }
    }

    if(!procesos.empty()){
        while(band5!=false){
            p = procesos[i];

            p.setEstado("Nuevo");
            tabla.push_back(p);

            if(i>=procesos.size()-1)
            {
                band5 = false;
            }

            i++;
        }
    }


    size_t cont(0);
    bool bandFinal = true;
    int cordenadaFinalY = 48;
    int llegada, finalizacion, espera, servicio, retorno, respuesta, TRB, resultado, tme, tamanio;
    int auxRetorno, auxEspera, TR;
    string estado, error, operacion;

    while(bandFinal!=false){
        p = tabla[cont];

        id = p.getID();
        llegada = p.getLlegada();
        finalizacion = p.getFinalizacion();
        espera = p.getEspera();
        servicio = p.getTT();
        retorno = p.getRetorno();
        respuesta = p.getRespuesta();

        estado = p.getEstado();
        TRB = 6 - p.getTTB();
        error = p.getResultadoError();
        resultado = p.getResultado();
        operacion = p.getOperacion();
        tme = p.getTME();
        TR = p.getTR();

        tamanio = p.getTamanio();

        if(estado != "Terminado"){
            retorno = finalizacion-llegada;
            espera = retorno - servicio;
        }

        if(estado == "Nuevo"){
            gotoxy(0, cordenadaFinalY);
            cout << "ID: " << id << endl;
            cordenadaFinalY++;
            gotoxy(0, cordenadaFinalY);
            cout << "Estado: " << estado << endl;
            cordenadaFinalY++;
            gotoxy(0, cordenadaFinalY);
            cout << "TME: " << tme << endl;
            cordenadaFinalY++;
            gotoxy(0, cordenadaFinalY);
            cout << "Operacion: " << operacion << endl;
            cordenadaFinalY++;
            gotoxy(0, cordenadaFinalY);
            cout << "Tamano: " << tamanio << endl;
            cordenadaFinalY++;

            gotoxy(0, cordenadaFinalY);
            cout << "Proceso no terminado. " << endl;
            cordenadaFinalY++;
            gotoxy(0, cordenadaFinalY);
            cout << "Tiempo restante en bloqueado: " << endl;
            cordenadaFinalY++;

            gotoxy(0, cordenadaFinalY);
            cout << "Llegada: " << endl;
            cordenadaFinalY++;
            gotoxy(0, cordenadaFinalY);
            cout << "Finalizacion: " << endl;
            cordenadaFinalY++;
            gotoxy(0, cordenadaFinalY);
            cout << "Espera: " << endl;
            cordenadaFinalY++;
            gotoxy(0, cordenadaFinalY);
            cout << "Servicio: " << endl;
            cordenadaFinalY++;
            gotoxy(0, cordenadaFinalY);
            cout << "Retorno: " << endl;
            cordenadaFinalY++;
            gotoxy(0, cordenadaFinalY);
            cout << "Tiempo restante en CPU: " << endl;
            cordenadaFinalY++;
            gotoxy(0, cordenadaFinalY);
            cout << "Respuesta: " << endl;
            cordenadaFinalY++;

            gotoxy(0, cordenadaFinalY);
            cout << "-------------------------------------------" << endl << endl;
            cordenadaFinalY++;
        }else{
            gotoxy(0, cordenadaFinalY);
            cout << "ID: " << id << endl;
            cordenadaFinalY++;
            gotoxy(0, cordenadaFinalY);
            cout << "Estado: " << estado << endl;
            cordenadaFinalY++;
            gotoxy(0, cordenadaFinalY);
            cout << "TME: " << tme << endl;
            cordenadaFinalY++;
            gotoxy(0, cordenadaFinalY);
            cout << "Operacion: " << operacion << endl;
            cordenadaFinalY++;
            gotoxy(0, cordenadaFinalY);
            cout << "Tamano: " << tamanio << endl;
            cordenadaFinalY++;

            if(error == "Error"){
                gotoxy(0, cordenadaFinalY);
                cout << "Terminado por error, resultado: " << "Error" << endl;
                cordenadaFinalY++;
            }else if(estado != "Terminado"){
                gotoxy(0, cordenadaFinalY);
                cout << "Proceso no terminado. " << endl;
                cordenadaFinalY++;
            }else{
                gotoxy(0, cordenadaFinalY);
                cout << "Terminado normalmente, resultado: " << resultado << endl;
                cordenadaFinalY++;
            }

            if(estado == "Bloqueado"){
                gotoxy(0, cordenadaFinalY);
                cout << "Tiempo restante en bloqueado: " << TRB << endl;
                cordenadaFinalY++;
            }else{
                gotoxy(0, cordenadaFinalY);
                cout << "Tiempo restante en bloqueado: " << endl;
                cordenadaFinalY++;
            }

            gotoxy(0, cordenadaFinalY);
            cout << "Llegada: " << llegada << endl;
            cordenadaFinalY++;

            if(estado == "Terminado"){
                gotoxy(0, cordenadaFinalY);
                cout << "Finalizacion: " << finalizacion << endl;
                cordenadaFinalY++;
            }else{
                gotoxy(0, cordenadaFinalY);
                cout << "Finalizacion: " << endl;
                cordenadaFinalY++;
            }

            gotoxy(0, cordenadaFinalY);
            cout << "Espera: " << espera << endl;
            cordenadaFinalY++;
            gotoxy(0, cordenadaFinalY);
            cout << "Servicio: " << servicio << endl;
            cordenadaFinalY++;

            if(estado == "Terminado"){
                gotoxy(0, cordenadaFinalY);
                cout << "Retorno: " << retorno << endl;
                cordenadaFinalY++;
            }else{
                gotoxy(0, cordenadaFinalY);
                cout << "Retorno: " << endl;
                cordenadaFinalY++;
            }

            if(estado == "Terminado"){
                gotoxy(0, cordenadaFinalY);
                cout << "Tiempo restante en CPU: " << endl;
                cordenadaFinalY++;
            }else{
                gotoxy(0, cordenadaFinalY);
                cout << "Tiempo restante en CPU: " << TR << endl;
                cordenadaFinalY++;
            }

            if(estado == "Listo    " || estado == "Suspendido"){
                if(respuesta > 0){
                    gotoxy(0, cordenadaFinalY);
                    cout << "Respuesta: " << respuesta << endl;
                    cordenadaFinalY++;
                }else{
                    gotoxy(0, cordenadaFinalY);
                    cout << "Respuesta: " << endl;
                    cordenadaFinalY++;
                }
            }else {
                gotoxy(0, cordenadaFinalY);
                cout << "Respuesta: " << respuesta << endl;
                cordenadaFinalY++;
            }
            gotoxy(0, cordenadaFinalY);
            cout << "-------------------------------------------" << endl << endl;
            cordenadaFinalY++;
        }

        if(cont>=tabla.size()-1)
        {
            bandFinal = false;
        }
        cont++;
    }

}

void Proyecto::TablaPaginas()
{
    int idAux, cos, res, total, espVacio = 0;
    size_t tope(0);
    size_t i(0), x(0), z(0), y(0), t(0);
    bool band = true, band2 = true, band3 = true, band4 = true, band5 = true;
    int m=0;

    if(primeraLLam == 0){
        if(!listos.empty()){
            while(band4!=false){
                list = listos[y];

                list.setEstado("Listo    ");

                for(int p = 0; p < list.getCos(); p++){
                    list.setMarco(m);
                    list.setMB("5/5");

                    tablaPag.push_back(list);
                    m++;
                }

                if(list.getRes() > 0){
                    if(list.getRes() == 1){
                        list.setMarco(m);
                        list.setMB("1/5");

                        tablaPag.push_back(list);
                        m++;
                    }else if(list.getRes() == 2){
                        list.setMarco(m);
                        list.setMB("2/5");

                        tablaPag.push_back(list);
                        m++;
                    }else if(list.getRes() == 3){
                        list.setMarco(m);
                        list.setMB("3/5");

                        tablaPag.push_back(list);
                        m++;
                    }else if(list.getRes() == 4){
                        list.setMarco(m);
                        list.setMB("4/5");

                        tablaPag.push_back(list);
                        m++;
                    }
                }

                if(y>=listos.size()-1)
                {
                    band4 = false;
                }
                y++;
            }
        }
        for(m; m < 44; m++){// 44 es el numero de marcos
            if(m > 39){ // 40 es el numero de marcos que se pueden usar ////////
                nada.setMarco(m);
                nada.setMB("0/5");
                nada.setID(50);
                nada.setEstado("Reservado por SO");

                tablaPag.push_back(nada);
            }else{ // 40 es el numero de marcos que se pueden usar //
                nada.setMarco(m);
                nada.setMB("0/5");
                nada.setID(0);
                nada.setEstado("-");

                tablaPag.push_back(nada);
            }
        }
        primeraLLam++;

        size_t cont(0);
        bool bandFinal = true;
        int cordenadaFinalY = 8;
        int marco, id;
        string estado, mb;

        while(bandFinal!=false){
            p = tablaPag[cont];

            marco = p.getMarco();
            mb = p.getMB();
            id = p.getID();
            estado = p.getEstado();

            if(id == 0){
                gotoxy(120, cordenadaFinalY);
                cout << marco << "\t" << mb << "\t" << "libre" << "\t" << estado << endl;
                cordenadaFinalY++;
            }else{
                gotoxy(120, cordenadaFinalY);
                cout << marco << "\t" << mb << "\t" << id << "\t" << estado << endl;
                cordenadaFinalY++;
            }

            if(cont>=tablaPag.size()-1)
            {
                bandFinal = false;
            }
            cont++;
        }

        gotoxy(120, 1);
        cout << " ";
    }else{
        size_t cont(0);
        bool bandFinal = true;
        int cordenadaFinalY = 8;
        int marco, id, idN, pagT;
        string estado, mb;

        if(!procesos.empty()){
            p = procesos[0];
            idN = p.getID();

            cos = p.getCos();
            res = p.getRes();
            pagT = cos + res;
            total = p.getTamanio();

            while(bandFinal!=false){
                tecla = tablaPag[cont];
                id = tecla.getID();

                if(id == 0){
                    espVacio+=5;
                }

                if(cont>=tablaPag.size()-1)
                {
                    bandFinal = false;
                }
                cont++;
            }

            bandFinal = true;
            cont = 0;
            int l = 0;

            if(espVacio >= total){
                while(bandFinal!=false){
                    tecla = tablaPag[cont];
                    id = tecla.getID();
                    marco = tecla.getMarco();

                    if(id == 0){

                        cordenadaFinalY = cordenadaFinalY+marco;

                        if(l < pagT){
                            if(l < p.getCos()){
                                tecla.setID(idN);
                                tecla.setEstado("Listo    ");
                                tecla.setMB("5/5");
                                tablaPag[cont] = tecla;

                                tecla = tablaPag[cont];
                                id = tecla.getID();
                                mb = tecla.getMB();
                                estado = tecla.getEstado();

                                gotoxy(120, cordenadaFinalY);
                                cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;
                                gotoxy(120, cordenadaFinalY);
                                cout << marco << "\t" << mb << "\t" << id << "\t" << estado << endl;

                                l++;
                            }else if(p.getRes() > 0){
                                if(p.getRes() == 1){
                                    tecla.setID(idN);
                                    tecla.setEstado("Listo    ");
                                    tecla.setMB("1/5");
                                    tablaPag[cont] = tecla;

                                    tecla = tablaPag[cont];
                                    id = tecla.getID();
                                    mb = tecla.getMB();
                                    estado = tecla.getEstado();

                                    gotoxy(120, cordenadaFinalY);
                                    cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;
                                    gotoxy(120, cordenadaFinalY);
                                    cout << marco << "\t" << mb << "\t" << id << "\t" << estado << endl;

                                    l++;
                                }else if(p.getRes() == 2){
                                    tecla.setID(idN);
                                    tecla.setEstado("Listo    ");
                                    tecla.setMB("2/5");
                                    tablaPag[cont] = tecla;

                                    tecla = tablaPag[cont];
                                    id = tecla.getID();
                                    mb = tecla.getMB();
                                    estado = tecla.getEstado();

                                    gotoxy(120, cordenadaFinalY);
                                    cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;
                                    gotoxy(120, cordenadaFinalY);
                                    cout << marco << "\t" << mb << "\t" << id << "\t" << estado << endl;

                                    l+=2;
                                }else if(p.getRes() == 3){
                                    tecla.setID(idN);
                                    tecla.setEstado("Listo    ");
                                    tecla.setMB("3/5");
                                    tablaPag[cont] = tecla;

                                    tecla = tablaPag[cont];
                                    id = tecla.getID();
                                    mb = tecla.getMB();
                                    estado = tecla.getEstado();

                                    gotoxy(120, cordenadaFinalY);
                                    cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;
                                    gotoxy(120, cordenadaFinalY);
                                    cout << marco << "\t" << mb << "\t" << id << "\t" << estado << endl;

                                    l+=3;
                                }else if(p.getRes() == 4){
                                tecla.setID(idN);
                                tecla.setEstado("Listo    ");
                                tecla.setMB("4/5");
                                tablaPag[cont] = tecla;

                                tecla = tablaPag[cont];
                                id = tecla.getID();
                                mb = tecla.getMB();
                                estado = tecla.getEstado();

                                gotoxy(120, cordenadaFinalY);
                                cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;
                                gotoxy(120, cordenadaFinalY);
                                cout << marco << "\t" << mb << "\t" << id << "\t" << estado << endl;

                                l+=3;
                            }

                            }
                        }
                    }

                    if(cont>=tablaPag.size()-1)
                    {
                        bandFinal = false;
                    }
                    cont++;
                    cordenadaFinalY = 8;
                }
            }

        }
    }
}

void Proyecto::TeclasPag(int idAux, string estado)
{
    size_t cont(0);
    bool bandFinal = true, unico = false;
    int cordenadaFinalY = 8;
    int marco, id;
    string mb;

    while(bandFinal!=false){
        cordenadaFinalY = 8;
        tecla = tablaPag[cont];

        marco = tecla.getMarco();
        mb = tecla.getMB();
        id = tecla.getID();

        if(id == idAux){

            cordenadaFinalY = cordenadaFinalY+marco;

            if(estado == "Listo    "){
                gotoxy(120, cordenadaFinalY);
                cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;

                tecla.setEstado("Listo    ");

                tablaPag[cont] = tecla;

                tecla = tablaPag[cont];
                id = tecla.getID();
                mb = tecla.getMB();
                estado = tecla.getEstado();

                gotoxy(120, cordenadaFinalY);
                cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;
                gotoxy(120, cordenadaFinalY);
                cout << marco << "\t" << mb << "\t" << id << "\t" << estado << endl;

            }else if(estado == "Bloqueado"){
                gotoxy(120, cordenadaFinalY);
                cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;

                tecla.setEstado("Bloqueado");

                tablaPag[cont] = tecla;

                tecla = tablaPag[cont];
                id = tecla.getID();
                mb = tecla.getMB();
                estado = tecla.getEstado();

                gotoxy(120, cordenadaFinalY);
                cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;
                gotoxy(120, cordenadaFinalY);
                cout << marco << "\t" << mb << "\t" << id << "\t" << estado << endl;

            }else if(estado == "Ejecucion"){
                gotoxy(120, cordenadaFinalY);
                cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;

                tecla.setEstado("Ejecucion");

                tablaPag[cont] = tecla;

                tecla = tablaPag[cont];
                id = tecla.getID();
                mb = tecla.getMB();
                estado = tecla.getEstado();

                gotoxy(120, cordenadaFinalY);
                cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;
                gotoxy(120, cordenadaFinalY);
                cout << marco << "\t" << mb << "\t" << id << "\t" << estado << endl;

            }else if(estado == "Terminado"){
                gotoxy(120, cordenadaFinalY);
                cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;

                tecla.setMB("0/5");
                tecla.setID(0);
                tecla.setEstado("-");

                tablaPag[cont] = tecla;

                tecla = tablaPag[cont];

                mb = tecla.getMB();

                gotoxy(120, cordenadaFinalY);
                cout << marco << "\t" << mb << "\t" << "libre" << "\t" << "-" << endl;

            }
        }

        if(cont>=tablaPag.size()-1)
        {
            bandFinal = false;
        }
        cont++;
    }
}

void Proyecto::Suspendidos()
{
    int id, tamanio;

    primeroBloq = bloqueados[0];
    primeroBloq.setTTB(0);
    suspendidos.push_back(primeroBloq);

    for(int CL = 0; CL < bloqueados.size()-1; CL++){
        n = bloqueados[CL+1];
        bloqueados[CL] = n;
    }
    bloqueados.pop_back();

    id = primeroBloq.getID();

    TeclasPag(id, "Terminado");

    remove("Suspendidos.txt");

    ofstream archivo("Suspendidos.txt",ios::app);

    if (!archivo.is_open())
        cout <<"Error al abrir el archivo de salida" <<endl;
    else
    {
        for (size_t i(0); i < suspendidos.size(); ++i)
        {
            arch = suspendidos[i];

            archivo << arch;
        }
    }

    contSuspendidos++;

    gotoxy(50, 18);
    cout << "Numero de procesos suspendidos: " << contSuspendidos << endl;

    arch = suspendidos[0];
    id = arch.getID();
    tamanio = arch.getTamanio();

    gotoxy(50, 20);
    cout << "Proceso a regresar" << endl;
    gotoxy(50, 21);
    cout << "------------------------------ " << endl;
    gotoxy(50, 22);
    cout << "ID: " << "    " << endl;
    gotoxy(50, 22);
    cout << "ID: " << id << endl;
    gotoxy(50, 23);
    cout << "Tamano: " << "    " << endl;
    gotoxy(50, 23);
    cout << "Tamano: " << tamanio << endl;

    archivo.close();
}

void Proyecto::Regreso()
{
    int id, tamanio;
    size_t cont(0);
    bool bandFinal = true;
    int cordenadaFinalY = 8;
    int marco, idN, pagT, cos, res, total, espVacio;
    string estado, mb;

    primeroBloq = suspendidos[0];
    idN = primeroBloq.getID();

    cos = primeroBloq.getCos();
    res = primeroBloq.getRes();
    pagT = cos + res;
    total = primeroBloq.getTamanio();

    while(bandFinal!=false){
        tecla = tablaPag[cont];
        id = tecla.getID();

        if(id == 0){
            espVacio+=5;
        }

        if(cont>=tablaPag.size()-1)
        {
            bandFinal = false;
        }
        cont++;
    }

    bandFinal = true;
    cont = 0;
    int l = 0;

    if(espVacio >= total){

        listos.push_back(primeroBloq);

        while(bandFinal!=false){
            tecla = tablaPag[cont];
            id = tecla.getID();
            marco = tecla.getMarco();

            if(id == 0){

                cordenadaFinalY = cordenadaFinalY+marco;

                if(l < pagT){
                    if(l < primeroBloq.getCos()){
                        tecla.setID(idN);
                        tecla.setEstado("Listo    ");
                        tecla.setMB("5/5");
                        tablaPag[cont] = tecla;

                        tecla = tablaPag[cont];
                        id = tecla.getID();
                        mb = tecla.getMB();
                        estado = tecla.getEstado();

                        gotoxy(120, cordenadaFinalY);
                        cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;
                        gotoxy(120, cordenadaFinalY);
                        cout << marco << "\t" << mb << "\t" << id << "\t" << estado << endl;

                        l++;
                    }else if(primeroBloq.getRes() > 0){
                        if(primeroBloq.getRes() == 1){
                            tecla.setID(idN);
                            tecla.setEstado("Listo    ");
                            tecla.setMB("1/5");
                            tablaPag[cont] = tecla;

                            tecla = tablaPag[cont];
                            id = tecla.getID();
                            mb = tecla.getMB();
                            estado = tecla.getEstado();

                            gotoxy(120, cordenadaFinalY);
                            cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;
                            gotoxy(120, cordenadaFinalY);
                            cout << marco << "\t" << mb << "\t" << id << "\t" << estado << endl;

                            l++;
                        }else if(primeroBloq.getRes() == 2){
                            tecla.setID(idN);
                            tecla.setEstado("Listo    ");
                            tecla.setMB("2/5");
                            tablaPag[cont] = tecla;

                            tecla = tablaPag[cont];
                            id = tecla.getID();
                            mb = tecla.getMB();
                            estado = tecla.getEstado();

                            gotoxy(120, cordenadaFinalY);
                            cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;
                            gotoxy(120, cordenadaFinalY);
                            cout << marco << "\t" << mb << "\t" << id << "\t" << estado << endl;

                            l+=2;
                        }else if(primeroBloq.getRes() == 3){
                            tecla.setID(idN);
                            tecla.setEstado("Listo    ");
                            tecla.setMB("3/5");
                            tablaPag[cont] = tecla;

                            tecla = tablaPag[cont];
                            id = tecla.getID();
                            mb = tecla.getMB();
                            estado = tecla.getEstado();

                            gotoxy(120, cordenadaFinalY);
                            cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;
                            gotoxy(120, cordenadaFinalY);
                            cout << marco << "\t" << mb << "\t" << id << "\t" << estado << endl;

                            l+=3;
                        }else if(primeroBloq.getRes() == 4){
                            tecla.setID(idN);
                            tecla.setEstado("Listo    ");
                            tecla.setMB("4/5");
                            tablaPag[cont] = tecla;

                            tecla = tablaPag[cont];
                            id = tecla.getID();
                            mb = tecla.getMB();
                            estado = tecla.getEstado();

                            gotoxy(120, cordenadaFinalY);
                            cout << "    " << "\t" << "    " << "\t" << "      " << "\t" << "          " << endl;
                            gotoxy(120, cordenadaFinalY);
                            cout << marco << "\t" << mb << "\t" << id << "\t" << estado << endl;

                            l+=3;
                        }
                    }
                }
            }

            if(cont>=tablaPag.size()-1)
            {
                bandFinal = false;
            }
            cont++;
            cordenadaFinalY = 8;
        }

        for(int CL = 0; CL < suspendidos.size()-1; CL++){
            n = suspendidos[CL+1];
            suspendidos[CL] = n;
        }
        suspendidos.pop_back();

        remove("Suspendidos.txt");

        ofstream archivo("Suspendidos.txt",ios::app);

        if (!archivo.is_open())
            cout <<"Error al abrir el archivo de salida" <<endl;
        else
        {
            for (size_t i(0); i < suspendidos.size(); ++i)
            {
                arch = suspendidos[i];

                archivo << arch;
            }
        }

        contSuspendidos--;

        gotoxy(50, 18);
        cout << "Numero de procesos suspendidos: " << contSuspendidos << endl;

        if(!suspendidos.empty()){
            primeroBloq = suspendidos[0];
            id = primeroBloq.getID();
            tamanio = primeroBloq.getTamanio();

            gotoxy(50, 20);
            cout << "Proceso a regresar" << endl;
            gotoxy(50, 21);
            cout << "------------------------------ " << endl;
            gotoxy(50, 22);
            cout << "ID: " << "    " << endl;
            gotoxy(50, 22);
            cout << "ID: " << id << endl;
            gotoxy(50, 23);
            cout << "Tamano: " << "    " << endl;
            gotoxy(50, 23);
            cout << "Tamano: " << tamanio << endl;
        }else{
            gotoxy(50, 20);
            cout << "Proceso a regresar" << endl;
            gotoxy(50, 21);
            cout << "------------------------------ " << endl;
            gotoxy(50, 22);
            cout << "ID: " << "    " << endl;
            gotoxy(50, 23);
            cout << "Tamano: " << "    " << endl;
        }
    }

}

void Proyecto::ProcesoEjecucion()
{
    int lote, tme, id, TT, TR, cordY = 9, respuesta, entrada, bandRes, contenedor;
    int mostrarQuantum = 0, cos, resid, total, idN, idT, tamanio, espVacio, Ptamanio;
    float resultado;
    size_t i(0), t(0);
    bool band = true, error = true, interrupcion = true, bandInt = true, bandListo = true;
    bool cumplio = true;
    bool bandFinal = true;
    string operacion;
    char letra;
    size_t cont(0);

    while(band!=false){
        if(listos.empty()){
            vacio.setID(0);
            vacio.setTME(20);
            vacio.setTT(0);
            vacio.setTR(20);
            vacio.setOperacion("");

            listos.push_back(vacio);
        }

        p = listos[i];

        if(!procesos.empty()){
            nuevo = procesos[0];
            idN = nuevo.getID();
            tamanio = nuevo.getTamanio();

            gotoxy(85, 1);
            cout << "   " << "\t" << "      " << endl;
            gotoxy(85, 1);
            cout << idN << "\t" << "\t" << tamanio << endl;

            bandFinal = true;
            cont = 0;
            espVacio = 0;

            while(bandFinal!=false){
                tecla = tablaPag[cont];
                idT = tecla.getID();

                if(idT == 0){
                    espVacio+=5;
                }

                if(cont>=tablaPag.size()-1)
                {
                    bandFinal = false;
                }
                cont++;
            }

            bandFinal = true;
            cont = 0;

            nuevo = procesos[0];
            cos = nuevo.getCos();
            resid = nuevo.getRes();
            total = nuevo.getTamanio();

            if(espVacio >= total){
                TablaPaginas();

                nuevo.setLlegada(contadorGlobal);
                listos.push_back(nuevo);

                for(int CL = 0; CL < procesos.size()-1; CL++){
                    nuevo = procesos[CL+1];
                    procesos[CL] = nuevo;
                }
                procesos.pop_back();

                if(procesosPendientes > 0){
                    procesosPendientes--;
                }

                bandListo = false;
            }

        }else{
            gotoxy(85, 1);
            cout << "   " << "\t" << "      " << endl;
        }

        if(p.getID() == 0){
            id = p.getID();
            operacion = p.getOperacion();
            tme = p.getTME();
            lote = p.getLote();
            resultado = p.getResultado();
            TT = p.getTT();
            TR = p.getTR();
            Ptamanio = p.getTamanio();

            gotoxy(70, 7);
            cout << "           " << endl;
            gotoxy(70, 8);
            cout << "           " << endl;
            gotoxy(70, 9);
            cout << "           " << endl;
            gotoxy(70, 10);
            cout << "           " << endl;
        }else{
            id = p.getID();
            operacion = p.getOperacion();
            tme = p.getTME();
            lote = p.getLote();
            resultado = p.getResultado();
            TT = p.getTT();
            TR = p.getTR();
            Ptamanio = p.getTamanio();

            gotoxy(70, 7);
            cout << "           " << endl;
            gotoxy(70, 7);
            cout << id << endl;
            gotoxy(70, 8);
            cout << "           " << endl;
            gotoxy(70, 8);
            cout << operacion << endl;
            gotoxy(70, 9);
            cout << "           " << endl;
            gotoxy(70, 9);
            cout << Ptamanio << endl;
            gotoxy(70, 10);
            cout << "           " << endl;
            gotoxy(70, 10);
            cout << tme << endl;
        }

        for(int x = TT; x < tme+1; x++){
            res = listos[i];
            bandRes = res.getBandRes();

            if(bandRes == 0){
                if(contadorGlobal == 0){
                    contadorGlobal++;
                    entrada = contadorGlobal;
                    respuesta = entrada - p.getLlegada();

                    bandRes++;
                    res.setBandRes(bandRes);
                    res.setRespuesta(respuesta);
                    listos[i] = res;
                    contadorGlobal--;
                }else{
                    entrada = contadorGlobal;
                    respuesta = entrada - p.getLlegada();

                    bandRes++;
                    res.setBandRes(bandRes);
                    res.setRespuesta(respuesta);
                    listos[i] = res;
                }
            }

            p = listos[i];
            tiempo = listos[i];

            if(p.getID() == 0){
                gotoxy(70, 11);
                cout << "           " << endl;
                gotoxy(70, 12);
                cout << "           " << endl;
                gotoxy(70, 13);
                cout << "           " << endl;
            }else{
                TeclasPag(id, "Ejecucion");

                gotoxy(70, 11);
                cout << "           " << endl;
                gotoxy(70, 11);
                cout << TT << endl;
                tiempo.setTT(TT);

                gotoxy(70, 12);
                cout << "           " << endl;
                gotoxy(70, 12);
                cout << TR << endl;
                tiempo.setTR(TR);

                gotoxy(70, 13);
                cout << "           " << endl;
                gotoxy(70, 13);
                cout << mostrarQuantum << endl;

                listos[i] = tiempo;

            }

            p = listos[i];

            if(mostrarQuantum == quantum){
                x = tme + 1;

                if(p.getTR() == 0){
                    cumplio = false;
                }
            }else{
                if(p.getTR() == 0){
                    cumplio = false;
                    x = tme + 1;
                }
            }

            if(x < tme){
                contadorGlobal++;
                gotoxy(10, 39);
                cout << contadorGlobal << endl;
            }

            if(kbhit()){
                letra = getch();
                switch(letra){
                    case 'e':
                        gotoxy(0, 42);
                        cout << "Interrupcion " << endl;
                        interrupcion = false;

                        bloqueados.push_back(p);

                        for(int CL = 0; CL < listos.size()-1; CL++){
                            listo = listos[CL+1];
                            listos[CL] = listo;
                        }
                        listos.pop_back();

                        if(listos.size() == 0){
                            vacio.setID(0);
                            vacio.setTME(10);
                            vacio.setTT(0);
                            vacio.setTR(10);
                            vacio.setOperacion("");

                            listos.push_back(vacio);
                        }

                        if(id == 0){

                        }else{
                            TeclasPag(id, "Bloqueado");
                        }

                        x = tme + 1;

                        break;
                    case 'p':
                        gotoxy(0, 42);
                        cout << "Pausa " << endl;

                        while(letra != 'c'){
                            if(kbhit()){
                                letra = getch();
                            }
                        }

                        gotoxy(0, 42);
                        cout << "Continuar " << endl;

                        break;
                    case 't':
                        gotoxy(0, 42);
                        cout << "Tabla de paginas " << endl;

                        while(letra != 'c'){
                            if(kbhit()){
                                letra = getch();
                            }
                        }

                        gotoxy(0, 42);
                        cout << "                  " << endl;
                        gotoxy(0, 42);
                        cout << "Continuar " << endl;

                        break;
                    case 'w':
                        gotoxy(0, 42);
                        cout << "Error " << endl;

                        error = false;
                        x = tme + 1;

                        break;
                    case 's':
                        gotoxy(0, 42);
                        cout << "Suspendido " << endl;

                        if(!bloqueados.empty()){
                            Suspendidos();
                        }

                        break;
                    case 'r':
                        gotoxy(0, 42);
                        cout << "Regresa " << endl;

                        if(!suspendidos.empty()){
                            Regreso();
                        }

                        break;
                    case 'n':
                        gotoxy(0, 42);
                        cout << "Nuevo " << endl;

                        NuevoProceso();

                        bandFinal = true;
                        cont = 0;
                        espVacio = 0;

                        while(bandFinal!=false){
                            tecla = tablaPag[cont];
                            idT = tecla.getID();

                            if(idT == 0){
                                espVacio+=5;
                            }

                            if(cont>=tablaPag.size()-1)
                            {
                                bandFinal = false;
                            }
                            cont++;
                        }

                        bandFinal = true;
                        cont = 0;

                        if(!procesos.empty()){
                            nuevo = procesos[0];
                            cos = nuevo.getCos();
                            resid = nuevo.getRes();
                            total = nuevo.getTamanio();

                            if(espVacio >= total){
                                TablaPaginas();

                                nuevo.setLlegada(contadorGlobal);
                                listos.push_back(nuevo);

                                for(int CL = 0; CL < procesos.size()-1; CL++){
                                    nuevo = procesos[CL+1];
                                    procesos[CL] = nuevo;
                                }
                                procesos.pop_back();

                                if(procesosPendientes > 0){
                                    procesosPendientes--;
                                }

                                bandListo = false;
                            }else{
                                nuevo = procesos[0];
                                idN = nuevo.getID();
                                tamanio = nuevo.getTamanio();

                                gotoxy(85, 1);
                                cout << "   " << "\t" << "      " << endl;
                                gotoxy(85, 1);
                                cout << idN << "\t" << "\t" << tamanio << endl;

                                procesosPendientes++;
                            }
                        }else{
                            nuevo = procesos[0];
                            idN = nuevo.getID();
                            tamanio = nuevo.getTamanio();

                            gotoxy(85, 1);
                            cout << "   " << "\t" << "      " << endl;
                            gotoxy(85, 1);
                            cout << idN << "\t" << "\t" << tamanio << endl;
                            procesosPendientes++;
                        }

                        gotoxy(0, 1);
                        cout << "Numero de procesos nuevos: " << "    " << endl;
                        gotoxy(0, 1);
                        cout << "Numero de procesos nuevos: " << procesosPendientes << endl;
                        cordY++;

                        break;
                    case 'b':
                        gotoxy(0, 42);
                        cout << "Tabla de procesos " << endl;

                        size_t contF(0);
                        bool bandF = true;

                        if(!listos.empty()){
                            while(bandF!=false){
                                auxFinal = listos[contF];

                                auxFinal.setFinalizacion(contadorGlobal);
                                listos[contF] = auxFinal;

                                if(contF>=listos.size()-1)
                                {
                                    bandF = false;
                                }
                                contF++;
                            }
                            p = listos[i];
                        }

                        contF = 0;
                        bandF = true;

                        if(!bloqueados.empty()){
                            while(bandF!=false){
                                auxFinal = bloqueados[contF];

                                auxFinal.setFinalizacion(contadorGlobal);
                                bloqueados[contF] = auxFinal;

                                if(contF>=bloqueados.size()-1)
                                {
                                    bandF = false;
                                }
                                contF++;
                            }
                        }

                        contF = 0;
                        bandF = true;

                        if(!suspendidos.empty()){
                            while(bandF!=false){
                                auxFinal = suspendidos[contF];

                                auxFinal.setFinalizacion(contadorGlobal);
                                suspendidos[contF] = auxFinal;

                                if(contF>=suspendidos.size()-1)
                                {
                                    bandF = false;
                                }
                                contF++;
                            }
                        }

                        MostrarTabla();

                        while(letra != 'c'){
                            if(kbhit()){
                                letra = getch();
                            }
                        }

                        gotoxy(0, 42);
                        cout << "Continuar " << endl;

                        bool bandFinal = true;
                        int cordenadaFinalY = 48, cont = 0;

                        while(bandFinal!=false){

                            gotoxy(0, cordenadaFinalY);
                            cout << "                   " << endl;
                            cordenadaFinalY++;
                            gotoxy(0, cordenadaFinalY);
                            cout << "                        " << endl;
                            cordenadaFinalY++;

                            gotoxy(0, cordenadaFinalY);
                            cout << "                         " << endl;
                            cordenadaFinalY++;
                            gotoxy(0, cordenadaFinalY);
                            cout << "                         " << endl;
                            cordenadaFinalY++;
                            cout << "                         " << endl;
                            cordenadaFinalY++;

                            gotoxy(0, cordenadaFinalY);
                            cout << "                                                  " << endl;
                            cordenadaFinalY++;
                            gotoxy(0, cordenadaFinalY);
                            cout << "                                                  " << endl;
                            cordenadaFinalY++;

                            gotoxy(0, cordenadaFinalY);
                            cout << "                        " << endl;
                            cordenadaFinalY++;
                            gotoxy(0, cordenadaFinalY);
                            cout << "                         " << endl;
                            cordenadaFinalY++;
                            gotoxy(0, cordenadaFinalY);
                            cout << "                            " << endl;
                            cordenadaFinalY++;
                            gotoxy(0, cordenadaFinalY);
                            cout << "                      " << endl;
                            cordenadaFinalY++;
                            gotoxy(0, cordenadaFinalY);
                            cout << "                        " << endl;
                            cordenadaFinalY++;
                            gotoxy(0, cordenadaFinalY);
                            cout << "                                                " << endl;
                            cordenadaFinalY++;
                            gotoxy(0, cordenadaFinalY);
                            cout << "                         " << endl;
                            cordenadaFinalY++;
                            gotoxy(0, cordenadaFinalY);
                            cout << "                                                         " << endl << endl;
                            cordenadaFinalY++;

                            if(cont>=20)
                            {
                                bandFinal = false;
                            }
                            cont++;
                        }

                        break;
                }
            }

            gotoxy(0, 27);
            cout << "       " << "\t" << "            " << endl;
            gotoxy(0, 28);
            cout << "       " << "\t" << "            " << endl;
            gotoxy(0, 29);
            cout << "       " << "\t" << "            " << endl;
            gotoxy(0, 30);
            cout << "       " << "\t" << "            " << endl;
            gotoxy(0, 31);
            cout << "       " << "\t" << "            " << endl;

            if(!bloqueados.empty()){
                Bloqueados();
            }

            p = listos[i];

            if(p.getID() == 0 && listos.size() > 1){
                x = tme + 1;
            }

            Listos(i);

            TT++;
            TR--;
            mostrarQuantum++;

            if(mostrarQuantum == quantum + 1){
                mostrarQuantum = 0;
            }else{
                if(p.getTR() == 0){
                    mostrarQuantum = 0;
                }
            }

            Sleep(1000);
            Listos(i);

            gotoxy(0, 42);
            cout << "                            " << endl;


        }

        mostrarQuantum = 0;

        if(interrupcion == true && bandListo == true){
            if(cumplio == true && error == true && id != 0){
                retorno = listos[0];

                for(int CL = 0; CL < listos.size()-1; CL++){
                    listo = listos[CL+1];
                    listos[CL] = listo;
                }
                listos.pop_back();

                listos.push_back(retorno);
                TeclasPag(id, "Listo    ");

            }else{
                if(id != 0){
                    ProcesosTerminados(id, error, TT);
                    TeclasPag(id, "Terminado");
                }

                for(int CL = 0; CL < listos.size()-1; CL++){
                    listo = listos[CL+1];
                    listos[CL] = listo;
                }
                listos.pop_back();

                if(!procesos.empty() && id!=0){
                    bandFinal = true;
                    cont = 0;
                    espVacio = 0;

                    while(bandFinal!=false){
                        tecla = tablaPag[cont];
                        idT = tecla.getID();

                        if(idT == 0){
                            espVacio+=5;
                        }

                        if(cont>=tablaPag.size()-1)
                        {
                            bandFinal = false;
                        }
                        cont++;
                    }

                    bandFinal = true;
                    cont = 0;

                    if(!procesos.empty()){
                        nuevo = procesos[0];
                        cos = nuevo.getCos();
                        resid = nuevo.getRes();
                        total = nuevo.getTamanio();

                        if(espVacio >= total){
                            TablaPaginas();

                            nuevo.setLlegada(contadorGlobal);
                            listos.push_back(nuevo);

                            for(int CL = 0; CL < procesos.size()-1; CL++){
                                nuevo = procesos[CL+1];
                                procesos[CL] = nuevo;
                            }
                            procesos.pop_back();

                            if(procesosPendientes > 0){
                                procesosPendientes--;
                            }

                            bandListo = false;
                        }
                    }

                }

                gotoxy(0, 1);
                cout << "Numero de procesos nuevos: " << "    " << endl;
                gotoxy(0, 1);
                cout << "Numero de procesos nuevos: " << procesosPendientes << endl;
                cordY++;

                cumplio = true;
            }
        }else if(interrupcion == true && bandListo == false){
            if(cumplio == true && error == true && id != 0){
                retorno = listos[0];

                for(int CL = 0; CL < listos.size()-1; CL++){
                    listo = listos[CL+1];
                    listos[CL] = listo;
                }
                listos.pop_back();

                listos.push_back(retorno);
                TeclasPag(id, "Listo    ");

            }else{
                if(id != 0){
                    ProcesosTerminados(id, error, TT);
                    TeclasPag(id, "Terminado");
                }

                for(int CL = 0; CL < listos.size()-1; CL++){
                    listo = listos[CL+1];
                    listos[CL] = listo;
                }
                listos.pop_back();

                gotoxy(0, 1);
                cout << "Numero de procesos nuevos: " << "    " << endl;
                gotoxy(0, 1);
                cout << "Numero de procesos nuevos: " << procesosPendientes << endl;
                cordY++;

                cumplio = true;
            }
        }

        if(interrupcion == false){
            Listos(i);
        }


        interrupcion = true;
        error = true;
        bandListo = true;
        bandVacio == true;

        if(listos.empty() && bloqueados.empty() && suspendidos.empty())
        {
            band = false;
        }
    }
}

void Proyecto::ProcesosTerminados(int idAux, bool error, int TT)
{
    int tme, id, final, retorno, espera;
    size_t i(0);
    bool band = true;
    float resultado;
    string operacion;

    while(band!=false){
        p = listos[i];

        id = p.getID();

        if(idAux == id){
            final = i;
        }

        if(i>=listos.size()-1)
        {
            band = false;
        }
        i++;
    }

    p = listos[final];

    p.setFinalizacion(contadorGlobal);

    TT--;
    p.setServicio(TT);

    retorno = p.getFinalizacion()-p.getLlegada();
    p.setRetorno(retorno);

    espera = p.getRetorno() - p.getServicio();
    p.setEspera(espera);

    if(error == false){
        p.setResultadoError("Error");
    }

    p.setEstado("Terminado");

    terminados.push_back(p);

    id = p.getID();
    operacion = p.getOperacion();
    resultado = p.getResultado();

    gotoxy(85, cordYGlobal);
    if(error == true){
        cout << id << "\t" << operacion << "\t" << "\t" << resultado << endl;
    }else{
        cout << id << "\t" << operacion << "\t" << "\t" << "Error" << endl;
    }
    cordYGlobal++;
}

int main()
{
    Proyecto a;

    a.Inicio();

    return 0;
}

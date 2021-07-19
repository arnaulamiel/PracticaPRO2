#include "Tret.hh"

Tret::Tret(){}

Tret::Tret (int id, Cjt_PCr pc) {
    
    c = pc;
    sind.insert(sind.end(),id);
    
}


void Tret::afegir_id(int id){
    
    set<int>::iterator it;
    if(not sind.empty()){
    
        sind.insert(sind.end(),id);
    
    }

    else sind.insert(it,id);
    
}

void Tret::treure_id(int id){
    set<int>::iterator it = sind.find(id);
    sind.erase(it);
    
}

void Tret::actualitz_cromo(Cjt_PCr c2){ //tinc 2 funcions
    
    c.interseccio(c2);
    
}

void Tret::actualizar_par_cromo(Cjt_Individus cji) {
  

        set<int>::iterator it = sind.begin();
        c = cji.retorna_individu(*it).retorna_cromo();
        ++it;
        while (it != sind.end()) {
            Cjt_PCr p1 = cji.retorna_individu(*it).retorna_cromo();
            c.interseccio (p1);
            ++it;
        }
}

bool Tret::es_buit(){
    return sind.empty();
}

bool Tret::id_esta_tret(int id){
    set<int>::iterator it = sind.find(id);
    if(it != sind.end()){
        return true;
    }
    else return false;
}

void Tret::imprimir_tret(){
    
    c.imprimir();
    set<int>::iterator it = sind.begin();
    while(it != sind.end()){
        cout << "  " << *it << endl;
        ++it;
    }
}


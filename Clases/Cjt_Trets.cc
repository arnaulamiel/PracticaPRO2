#include "Cjt_Trets.hh"


void Cjt_Trets::afegir_noutret(const string& t, int id, Cjt_Individus cji){
    
    map<string,Tret>::iterator it = mapct.find(t);
    Cjt_PCr c = cji.retorna_individu(id).retorna_cromo();
    
    if(it == mapct.end()){ //no existeix el tret
        
        Tret nou_tret(id,c);
        mapct.insert(it,pair<string,Tret> (t,nou_tret));
    
    }
        
    else{
        
        (*it).second.actualitz_cromo (c); 
        (*it).second.afegir_id(id);
        
    }
    
}
void Cjt_Trets::treure_tret(const string& t, int id, Cjt_Individus cji){
            
    map<string, Tret>::iterator it = mapct.find(t);
   
    if((*it).second.id_esta_tret(id)){
        
        if (it != mapct.end()){ //si existeix el tret
        
            (*it).second.treure_id(id);

            if (not (*it).second.es_buit()){ 
            
                (*it).second.actualizar_par_cromo(cji);        

            }
            else mapct.erase(it);
        }
        else cout << " error" << endl;
    }
}

void Cjt_Trets::reset() {
        
    mapct.clear();
} 

bool Cjt_Trets::te_tret(const string& t){
    map<string,Tret>::iterator it = mapct.find(t);
    return (it != mapct.end());
    
}
       
void Cjt_Trets::consultar_tret(const string& t){ 
    
    map<string,Tret>::iterator it = mapct.find(t);
    if(it != mapct.end()){
        cout << "  " << t << endl;
        (*it).second.imprimir_tret();
                
    }
    else  cout<<"  error"<<endl;
     
}
 

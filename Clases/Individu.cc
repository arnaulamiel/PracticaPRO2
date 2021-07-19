#include "Individu.hh"


Individu::Individu () {};

void Individu::afegir_tret(const string& t){
    
    set<string>::iterator it = st.find(t);
    
    if (it == st.end()){
        
        st.insert(it,t);
        
    }
    else cout << "  error" << endl;
        
    
}
void Individu::treure_tret(const string& t){
    
    set<string>::iterator it = st.find(t);
    
    if(it != st.end()){
        
        st.erase(it);
        
    }
    
    else cout << "  error" <<endl;
    
}

Cjt_PCr Individu::retorna_cromo(){
    
    return c;
    
}

bool Individu::te_tret(const string& t){
    
    set<string>::iterator it = st.find(t);
    if(it == st.end()){
        return false;
    }
    else return true;
}

void Individu::llegir_cromo(int m){
    
    c.llegir_parells(m);
    
}

void Individu::imprimir () {

    c.imprimir();
    if (not st.empty()) {
        set<string>::iterator it = st.begin();
        while (it != st.end()) {
            cout <<"  " <<  *it << endl;
            ++it;
        }
        
    }
    
}


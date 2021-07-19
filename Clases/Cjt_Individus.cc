#include "Cjt_Individus.hh"

 

Cjt_Individus::Cjt_Individus(){}


void Cjt_Individus::afegir_tret(const string& t, int id){
    
    vind[id-1].afegir_tret(t);
    
}

void Cjt_Individus::treure_tret(const string& t, int id){
    
    vind[id-1].treure_tret(t);
    
}

Individu Cjt_Individus::retorna_individu(int id){
    
    return vind[id-1];
    
}


BinTree<int> Cjt_Individus::distribucio_arbre(const BinTree<int>& arbre,const string& t) {
    
    BinTree<int> arbrefinal;
    int id = arbre.value();    
    if (arbre.left().empty() and arbre.right().empty()) {
        
            
        if (vind[id-1].te_tret(t)) {
                
            arbrefinal = BinTree<int>(arbre.value(), arbre.left(), arbre.right());
                
        }
        else {
                
            arbrefinal = BinTree<int>();
                
        }
    }
    else {
            
        BinTree<int> esq = distribucio_arbre(arbre.left(), t);
        BinTree<int> dre = distribucio_arbre(arbre.right(), t);
            
        if (vind[id-1].te_tret(t)) {
                
            arbrefinal = BinTree<int>(arbre.value(), esq, dre);
                
        }
        else {
                
            if (esq.empty() and dre.empty()) {
                    
                arbrefinal = BinTree<int>();
            }
            else {
                    
                arbrefinal = BinTree<int>(arbre.value() * (-1), esq, dre);
                    
            }
        }
    }
    
    return arbrefinal;
    
}

void Cjt_Individus::llegir(int n, int m) {
    
    vind = vector<Individu> (n);
    
    read_bintree_int(arbre,0);
    
    for (int i = 0; i < n; ++i) {
    
        Individu id;
        id.llegir_cromo(m);
        vind[i] = id; 
        
    }
    
}
void Cjt_Individus::escriure_arbre_distribucio(const string& t){
   
    BinTree<int> aux = distribucio_arbre (arbre,t);
    cout << " ";
    write_bintree_int(aux);   
    cout << endl;
}

void Cjt_Individus::consulta_individu (int id){
    
    vind[id-1].imprimir();
    
}


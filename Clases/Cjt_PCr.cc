#include "Cjt_PCr.hh"
 

Cjt_PCr::Cjt_PCr() {}


void Cjt_PCr::interseccio(Cjt_PCr c2){
    //tu ja soposes que tens bastant material
    //hauries de tenir el cas de un copia i pega, quan es unic
    int m = vP.size();
    for (int i = 0; i < m; ++i){
        if(vP[i] != c2.vP[i] or vS[i] != c2.vS[i]){
            vP[i] = '-';
            vS[i] = '-';
        }
    }
}

void Cjt_PCr::llegir_parells(int mida) {
    
    for (int i = 0;i < mida; ++i){
        char x;
        cin >> x;
        vP.push_back(x);
        
    }
    
    for (int i = 0; i < mida; ++i){
        char x;
        cin >> x;
        vS.push_back(x);
        
    }
}

void Cjt_PCr::imprimir() {
    
    int n = vP.size();
    cout << "  ";
    for (int i = 0; i < n; ++i) {
        cout << vP[i];
    }
    
    cout << endl;
    cout << "  ";
    for (int i = 0; i < n; ++i) {
        cout << vS[i];
    }
    cout << endl;
    
}
#include "Cjt_Trets.hh"
#include "Cjt_Individus.hh"
#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    string t;
    int id;
    Cjt_Individus cji;    
    Cjt_Trets cjt;
    while(cin >> s and s!="fi") {

        if (s == "experiment"){
            
            int nind,m;
            cin >> nind >> m;
            cout<<"experiment "<<nind<<' '<<m<<endl;
            cjt.reset();
            cji.llegir(nind,m);
            
                        
        }
        
        
        else if (s == "consulta_individu") {
            
            
            int id;
            cin >> id;
            cout<<"consulta_individu "<<id<<endl;
            cji.consulta_individu(id);
            
            
        }
        
        else if(s == "afegir"){
            
            cin >> t >> id;
            cout<<"afegir "<<t<<' '<<id<<endl;
            cji.afegir_tret (t,id);
            cjt.afegir_noutret(t,id, cji);
            
            
            
        }   
        
        else if(s == "consulta_tret"){
            
            cin>>t;
            cout<< "consulta_tret "<< t << endl;
            cjt.consultar_tret(t);
            
        }
        
        else if(s == "treure"){
            
            cin >> t >> id;
            cout<<"treure "<<t<<' '<<id<<endl;
            cji.treure_tret(t,id);
            cjt.treure_tret(t,id,cji); 
            
        }
        
        
        else if(s == "distribucio_tret"){

            cin>>t;
            cout << "distribucio_tret " << t << endl;
            if(cjt.te_tret(t)){

                cji.escriure_arbre_distribucio(t);
                
            }
            else cout << "  error" << endl;
        }
    
    }
    if(s=="fi")cout << "fi" << endl;
}

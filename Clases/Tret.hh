/** @file Tret.hh
 *  @brief Especificació de la classe Tret
 * */
#ifndef CLASS_Tret_HH
#define CLASS_Tret_HH
#include "Cjt_PCr.hh"
#include "Cjt_Individus.hh"
#include <string>
#include <set>
#include <iostream>
using namespace std;
/** @class Tret
 *  @brief Representa un Tret amb uns Parells de Cromosomes i una set dels individus que té = sind
 */
class Tret{
    
    private:
        
        Cjt_PCr c;
        set<int>sind;
        
    public:
        //Constructores
        
        /** @brief Creadora per defecte
         * \pre <em>cert</em>
         * \post El resultat és un tret amb valor c = 0 i un set d'individus buit
         */
        Tret();
        
        /** @brief Creadora amb uns valors concrets
         * \pre pc no buit, id és vàlid i existeix un individu amb identificador id
         * \post El resultat és un Tret amb un individu que té el tret i amb uns cromosomes pc
         */
        Tret (int id, Cjt_PCr pc);
        
        //Modificadores
        
        /** @brief Modificadora que afegeix un individu al Tret
         * \pre El paràmetre implícit no té l'individu id, id és vàlid i existeix un individu amb identificador id
         * \post El paràmetre implícit passa a tenir l'individu t si no el tenia, si el tenia escriu "error"
         */
        void afegir_id(int id);
        
        /** @brief Modificadora que treu un individu a un tret
         * \pre El paràmetre implícit té l'individu id, id és vàlid i existeix un individu amb identificador id
         * \post El paràmetre implícit ja no té l'individu id
         */
        void treure_id(int id);
        
        /** @brief Modificadora que actualitza els cromosomes del tret
         * \pre El paràmetre implícit té una combinació de cromosomes 
         * \post El paràmetre implícit té com a combinació de cromosomes la intersecció del que tenia abans i el nou cromosoma c;
         */
        void actualitz_cromo(Cjt_PCr c);
        
        /** @brief Modificadora que actualitza els cromosomes del tret al treure un individu
         * \pre El paràmetre implícit té una combinació de cromosomes
         * \post Quan hem tret un individu al tret, al paràmetre implícit té com a combinació de cromosomes la intersecció dels que tenia abans menys el que hem tret
         */ 
        void actualizar_par_cromo(Cjt_Individus cji);
        
        //Consultores
        
        /** @brief Consultora que mira si sind és buit
         * \pre <em>cert</em>
         * \post El resultat et retorna si hi ha algun individu que té el tret (com a booleà)
         */
        bool es_buit();
        
        /** @brief Consultora que mira si id està dins de sind
         * \pre <em>cert</em>, id és vàlid i existeix un individu amb identificador id
         * \post El resultat et retorna si id està dins de sind (com a booleà)
         */
        bool id_esta_tret(int id);

        //Escriptura
        
        /** @brief Operació d'escriptura
         *\pre <em>cert</em>
         *\post S'han escrit els atributs del paràmetre implícit en el canal estàndard de sortida
        */
        void imprimir_tret();
        

        
};
#endif

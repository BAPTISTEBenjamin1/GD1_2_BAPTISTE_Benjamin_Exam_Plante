#include <stdio.h>
#include <iostream>
#include "plante.hpp"




int main()
{
    
int argent = 0;
int choix = 4;
int engrais = 25;


    Plante p{};


    std::cout <<"\n\nVoici votre première plante :";
    
    std::cout <<"vous avez : "<< argent <<"euros";
    
    std::cout <<"\n\nQue voulez vous faire ?";
    
    std::cout <<"\n1-Examiner la Plante";
    std::cout <<"\n2-Nourrir la Plante";
    std::cout <<"\n3-Arroser la Plante\n\n";
    
  
    
    while(choix == 4)
   {
      
    
    std::cin >>choix;
    
 
    p.grandir(); 
        
    
       
       
        if(choix == 1)
        {
            
            
            std::cout <<"\n\nVoila l'etat de la plante : \n\n";
            
            std::cout <<"Soif : " << p.getsoif() << "/100\n";
            std::cout <<"Croissance : " << p.getcroissance() << "/100\n";
            std::cout <<"Faim : " << p.getfaim() << "/100\n";
            std::cout <<"Sante : " << p.getsante() << "/100\n";
            std::cout <<"Volume : " << p.getvolume() << "/10\n";
            
            choix = choix + 3;
            
            
            
        }
        
         if(choix == 2)
        {
              
                
            std::cout <<"\n\nVous nourrissez la plante\n\n";
            
            p.nourrir(engrais);
            
            std::cout <<"Faim : " << p.getfaim() << "/100\n";
            
            choix = choix + 2;
        }
   }
   
     
    
    

    return 0;
}

/*

class Joueur
{
    public:
    
    
        Joeur();
        Joeur(int argent);
        
        int getargent() const;
        
        
        void montrerArgent();
       
    
    
    private:
    
        
        int argent;
    
    
    
    
};


*/





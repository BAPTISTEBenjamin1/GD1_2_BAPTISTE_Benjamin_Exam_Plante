#if !defined(__PLANTE__)
#define __PLANTE__
#include <string>

class Plante
{
    public:
    
    
        Plante();
        Plante(int soif);
        
        int getsoif() const;
        int getcroissance() const;
        int getfaim() const;
        int getsante() const;
        int getvolume() const;
        
        void hello();
        void nourrir(int e);
        void grandir();
        
        
    
    
    private:
    
        
        int soif;
        int croissance;
        int faim;
        int sante;
        int volume;
        
        int engrais;
    
    
};






#endif
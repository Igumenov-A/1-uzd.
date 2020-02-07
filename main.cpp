#include <iostream>
#include <string>

struct vizitine{
    std::string var, eil1="*", eil2="*", eil3="* ";

    void nusk(){
        std::cout << "Vardas?" << std::endl;
        std::cin>>var;
        eil3+="Sveikas, "+var+"! *\n";
        int n=eil3.length();
        for (int i = 1; i < n - 2; i++, eil1= eil1 + "*", eil2= eil2 + " ");
        eil1=eil1+"*\n";eil2=eil2+"*\n";
    }
    void spausd(){
        std::cout<<eil1<<eil2<<eil3<<eil2<<eil1;
    }
};

int main()
{
    vizitine V1;
    V1.nusk();
    V1.spausd();
    std::cout<<"Pabaiga";
    return 0;
}

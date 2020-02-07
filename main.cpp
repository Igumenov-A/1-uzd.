#include <iostream>

int main()
{
        std::string var, eil1="*", eil2="*", eil3="* ", eil4;

        std::cout << "Vardas?" << std::endl;
        std::cin>>var;
        if (*var.rbegin() == 's') eil4="Sveikas, "; else eil4="Sveika, ";
        eil3+=eil4+var+"! *\n";
        int n=eil3.length();

        for (auto i=1; i < n - 2; i++, eil1= eil1 + "*", eil2= eil2 + " ");

        eil1=eil1+"*\n";eil2=eil2+"*\n";

        std::cout<<eil1<<eil2<<eil3<<eil2<<eil1;
    std::cout<<"Programos pabaiga";
    std::cin.get();
    return 0;
}

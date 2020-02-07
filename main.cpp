#include <iostream>
#include <string>

struct vizitine{
    std::string var, eil1="*", eil2="*", eil3="* ", eil4;
    int eil_sk, son_tarpai;
    void nusk(){
        std::cout << "Vardas?" << std::endl;
        std::cin>>var;
        std::cout<<"Iveskite remelio eil. sk.:"; std::cin>>eil_sk;
        std::cout<<"Iveskite remelio son. tarpu sk.:"; std::cin>>son_tarpai;
        for (int i=0; i<son_tarpai; i++, eil3+=" ");
        if (*var.rbegin() == 's') eil4="Sveikas, "; else eil4="Sveika, ";
        eil3+=eil4+var+"!";

        for (int i=0; i<son_tarpai; i++, eil3+=" ");

        eil3+="*\n";
        int n=eil3.length();

        for (auto i=1; i < n - 2; i++, eil1= eil1 + "*", eil2= eil2 + " ");

        eil1=eil1+"*\n";
        eil2=eil2+"*\n";
        }
    void spausd(){
        std::cout<<eil1;
        for (int i=0; i<eil_sk;i++, std::cout<<eil2);
        std::cout<<eil3;
        for (int i=0; i<eil_sk;i++, std::cout<<eil2);
        std::cout<<eil1;
    }
};

int main()
{
    vizitine V1;
    V1.nusk();
    V1.spausd();
    std::cout<<"Programos pabaiga";
    std::cin.get();
    return 0;
}

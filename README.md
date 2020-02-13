# Pasisveikinimas
Programa turi nuskaito naudotojo vardą (pvz. Aleksandr) ir atspausdinti "įrėmintą" pasisveikinimą:
![](1.png)

## Įdiegimas (Unix kompiuteryje) naudojant `Clang`kompiliatorių 

- `git clone https://github.com/objprog/pasisveikinimas.git`
- `cd pasisveikinimas`
- `clang++ -std=c++11 pasisveikinimas.cpp -o pasisveikinimas`
- `./pasisveikinimas`

## Versijų istorija (changelog)

---

## [Versija 0.1](https://github.com/Igumenov-A/1-uzd./tree/v0.1) (07-02-2020)
Pirmoje eilutėje prasideda rėmelis, kuris yra simbolių * seka.
Rėmelio ilgis priklauso nuo: įvesto vartotojo vardo ilgio pasisveikinimo "Sveikas, " tarpo ir \* simbolio rėmelio pradžioje ir pabaigoje.
Antroji eilutė prasideda ir baigiasi \* simboliu, o vidus užpildytas reikiamu skaičiumi tarpo simbolių. 
Trečioji eilutė susideda iš \*, tarpo, pasisveikinimo, tarpo ir \*. 
Kervirta ir penkta eilutės bus analogiškos antrąjai ir pirmąjąi. 

## [Versija 0.2](https://github.com/Igumenov-A/1-uzd./tree/v0.2) (07-02-2020)
Versija 0.1 praplesta:
Jeigu naudotojas yra moteris, tuomet vietoj "Sveikas, " rašytų "Sveika, ", kitaip "Sveikas, ".  

## [Versija 1.0](https://github.com/Igumenov-A/1-uzd./tree/v1.0) (07-02-2020)
Modifikuota versiją (v0.2).
* Visos eilutės saugomos struktūroje
* Nadotojas nurodo rėmelio plotį (eilučių skaičių) ir pasisveikinimas išliktų rėmelio viduje. 


## Opublikuotos versijos:
- [v0.1](https://github.com/Igumenov-A/1-uzd./releases/tag/v0.1)
- [v0.2](https://github.com/Igumenov-A/1-uzd./releases/tag/v0.2)
- [v1.0](https://github.com/Igumenov-A/1-uzd./releases/tag/v1.0)

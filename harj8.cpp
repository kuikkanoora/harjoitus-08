/**********************************************************
*Tehtävä: Harjoitus8
*Tekijä: Noora Kuikka
*PVM: 24.9.2013
*Kuvaus:
*Tee ohjelma, joka tulostaa annetut kolme lukua suuruus-
*järjestyksessä (pienimmästä suurimpaan) näytölle
*(katso harj. 1 suunnitelma)
*a) käytä kokonaislukuja
*b) käytä liukulukuja (=reaalilukuja)
*
* Versio 1.0 H4719 24.9.2013
***********************************************************/

#include <iostream>
using namespace std;
int main(void)
{
    int num1;
	int num2;
	int num3;
	
	cout << "Please enter three numbers.";
	cout << "\n1: "; cin >> num1;
	cout << "\n2: "; cin >> num2;
	cout << "\n3: "; cin >> num3;
	
	if (num1 > num2 && num1 > num3 && num2 > num3)
	{
	    cout << num1 << "\n" << num2 << "\n" << num3 << "\n";
	}
	else if (num1 > num2 && num1 > num3 && num3 > num2)
	{
	    cout << num1 << "\n" << num3 << "\n" << num2 << "\n";
	}
	else if (num3 > num1 && num3 > num2 && num1 > num2)
	{
	    cout << num3 << "\n" << num1 << "\n" << num2 << "\n";
	}
	else if (num3 > num2 && num3 > num1 && num2 > num1)
	{
	    cout << num2 << "\n" << num2 << "\n" << num1 << "\n";
	}
	else if (num2 > num3 && num2 > num1 && num3 > num1)
	{
	   cout << num2 << "\n" << num3 << "\n" << num1 << "\n";
	}
	else
	{
	    cout << num2 << "\n" << num1 << "\n" << num3 << "\n";
	}
}

	    

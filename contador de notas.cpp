#include <iostream>
using namespace std;    
int main ()
{
 	double dinheiro;
 	int nota, moeda,n100,n50,n20,n10,n5,n2,n1,m50,m25,m10,m5,m01,rest;
 	
 	cin >> dinheiro;
 	
 	nota = dinheiro;
 	moeda = dinheiro - nota;
 	n100 = nota /100;
 	rest = nota % 100;
 	n50 = rest / 50;
 	rest = rest % 50;
 	n20= rest / 20;
 	rest = rest % 20;
 	n10 = rest / 10;
 	rest = rest % 10;
 	n5 = rest / 5;
 	rest = rest % 5;
 	n2 = rest/ 2;
 	rest = rest % 2;
 	n1 = rest % 2;
 	cout << "NOTAS: \n";
	cout << n100 <<" " << "nota(s) de R$ 100.00\n";
	cout << n50 <<" " << "nota(s) de R$ 50.00\n";
	cout << n20 <<" " << "nota(s) de R$ 20.00\n";
	cout << n10 <<" " << "nota(s) de R$ 10.00\n";
	cout << n5 <<" " << "nota(s) de R$ 5.00\n";
	cout << n2 <<" " << "nota(s) de R$ 2.00\n";	
	cout << n1 <<" " << "nota(s) de R$ 1.00\n";
	m50 = moeda / 50;
	rest = moeda % 50;
	m25 = rest / 25;
	rest = rest % 25;
	m10 = rest / 10;
	rest = rest % 10;
	m5 = rest / 5;
	rest = rest % 5;
	m01 = rest / 1;
	cout << "Moedas: \n";
	cout << m50 << " " << "moeda(s) de R$ 0.50\n";
	cout << m25 << " " << "moeda(s) de R$ 0.25\n";
	cout << m10 << " " << "moeda(s) de R$ 0.10\n";
	cout << m5 << " " <<  "moeda(s) de R$ 0.5\n";
	cout << m01 << " " << "moeda(s) de R$ 0.1\n";
	
	  
}

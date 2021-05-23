#include<iostream>
#include "CPunct.h"
#include "CDreapta.h"
#include "CDreptunghi.h"
#include "CPatrat.h"
#include "CCerc.h"
using namespace std;
int main()
{
	float x0, y0, x1, y1, x2, y2, x3, y3;
	CPunct punct;
	cout << "Arie punct= " << punct.getArie() << endl;
	cout << "Perimetru punct= " << punct.getPerimetru() << endl;

	cout << "\n introduceti coordonata x0= ";
	cin >> x0;
	cout << "\n introduceti coordonata y0= ";
	cin >> y0;
	cout << "\n introduceti coordonata x1= ";
	cin >> x1;
	cout << "\n introduceti coordonata y1= ";
	cin >> y1;
	CDreapta dreapta;
	cout << "Arie dreapta= " << dreapta.getArie() << endl;
	cout << "Perimetru dreapta= " << dreapta.getPerimetru() << endl;
	cout << "Lungimea dreptei AB= " << dreapta.getDreapta(x0, y0, x1, y1) << endl;

	cout << "\n introduceti coordonata razei x0= ";
	cin >> x0;
	cout << "\n introduceti coordonata razei y0= ";
	cin >> y0;
	cout << "\n introduceti coordonata razei x1= ";
	cin >> x1;
	cout << "\n introduceti coordonata razei y1= ";
	cin >> y1;
	CCerc cerc;
	cout << "Arie cerc= " << cerc.getArieCerc(x0,y0,x1,y1) << endl;
	cout << "Perimetru cerc= " << cerc.getPerimetruCerc(x0,y0,x1,y1) << endl;

	cout << "\n introduceti coordonata latimii patratului x0= ";
	cin >> x0;
	cout << "\n introduceti coordonata latimii patratului y0= ";
	cin >> y0;
	cout << "\n introduceti coordonata latimii patratului x1= ";
	cin >> x1;
	cout << "\n introduceti coordonata latimii patratului y1 =";
	cin >> y1;
	CPatrat latura;
	cout << "Arie patrat= " << latura.getAriePatrat(x0, y0, x1, y1) << endl;
	cout << "Perimetru patrat= " << latura.getPerimetruPatrat(x0, y0, x1, y1) << endl;

	cout << "\n introduceti coordonata latimii dreptunghiului x0= ";
	cin >> x0;
	cout << "\n introduceti coordonata latimii dreptunghiului y0= ";
	cin >> y0;
	cout << "\n introduceti coordonata latimii dreptunghiului x1= ";
	cin >> x1;
	cout << "\n introduceti coordonata latimii dreptunghiului y1= ";
	cin >> y1;
	cout << "\n introduceti coordonata lungimii dreptunghiului x2= ";
	cin >> x2;
	cout << "\n introduceti coordonata lungimii dreptunghiului y2= ";
	cin >> y2;
	cout << "\n introduceti coordonata lungimii dreptunghiului x3= ";
	cin >> x3;
	cout << "\n introduceti coordonata lungimii dreptunghiului y3= ";
	cin >> y3;
	CDreptunghi dreptunghi;
	cout << "\n Perimetrul dreptunghiului= " << dreptunghi.getPerimetruDreptunghi(x0, y0, x1, y1, x2, y2, x3, y3) << endl;
	cout << "\n Aria dreptunghiului= " << dreptunghi.getArieDreptunghi(x0, y0, x1, y1, x2, y2, x3, y3) << endl;

}

	

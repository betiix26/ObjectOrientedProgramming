
S se proiecteze i s se implementeze o clas pentru standardul ISBN
(International Standard Book Number). Un obiect din aceast clas este un

numr ISBN unic asociat unei cari sau reviste, format din 10 cifre
zecimale grupate în patru secvene de dimensiune variabila:
• grupul sau identificatorul de ar, pentru identificarea rii editurii

care a publicat cartea sau revista; în mod uzual toate editurile dintr-
o anumit ar sau regiune geografic au acelai numr pentru

grup;
• identificatorul editurii, pentru identificarea editurii în cadrul
grupului de edituri;
• identificatorul de titlu, pentru identificarea titlului unei cari sau
reviste editat de o editur;
• cifra de control, care este întotdeauna format dintr-o singur cifr.
Spre deosebire de celelalte grupuri, cifra de control poate s fie atât o cifr
zecimal sau litera X, corespunzând numrului 10. Cifra de control se
determin ca valoarea modulo 11 din numrul obinut prin concatenarea
tuturor celorlalte 9 cifre. Clasa va avea ca dat membru un ir de caractere
ce va reprezenta ISBN-ul, utilizând caracterul ‘-‘ pentru separarea celor
patru grupuri. Ea va trebui s conin cel puin urmtoarele funcii
membru:
• un constructor, în cazul specificrii doar a primelor trei grupuri,
cifra de control fiind generat automat;
• un constructor, pentru cazul în care se specific complet ISBN-ul,
ca ir de 13 caractere;
• o funcie membru pentru validarea cifrei de control;
• o funcie membru pentru afiarea ISBN-ului.

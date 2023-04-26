#include <iostream>
#include <cmath>
using namespace std;

void citire (int v[], int n)
{
    for(int i=1; i<=n; i++)
        cin>>v[i];
}

void cpy(int v[], int u[], int n)
{
    for(int i=1;i<=n;i++)
        u[i]=v[i];
}

void restore(int v[], int u[], int n)
{
    for(int i=1;i<=n;i++)
        v[i]=u[i];
}

void afisare(int v[], int n)
{
    for(int i=1; i<=n; i++)
        cout<<v[i]<<" ";
}

void afisareInversa(int v[], int n)
{
    for(int i=n; i>=1; i--)
        cout<<v[i]<<" ";
}

void uc(int v[], int n)
{
    for(int i=1; i<=n; i++)
        cout<<v[i]%10<<" ";
}

int minim(int v[], int n)
{
    int minim=v[1];
    for(int i=2; i<=n; i++)
        if(v[i]<minim)
            minim=v[i];
    return minim;
}

int maxim(int v[], int n)
{
    int maxim=v[1];
    for(int i=2; i<=n; i++)
        if(v[i]>maxim)
            maxim=v[i];
    return maxim;
}

int ePrim(int n)
{
    if(n<2)
        return 0;
    for(int i=2; i*i<=n; i++)
        if(n%i==0)
            return 0;
    return 1;
}

void nrPrime(int v[], int n)
{
    for(int i=1; i<=n; i++)
        if(ePrim(v[i]))
            cout<<v[i]<<" ";
}

void patratePerfecte(int v[], int n)
{
    for(int i=1; i<=n; i++)
        if(sqrt(v[i])==(int)sqrt(v[i]))
            cout<<v[i]<<" ";
}

void cuburiPerfecte(int v[], int n)
{
    for(int i=1; i<=n; i++)
        if(cbrt(v[i])==(int)cbrt(v[i]))
            cout<<v[i]<<" ";
}

int invers(int n)
{
    int m=0;
    while(n>0)
    {
        m=m*10+n%10;
        n=n/10;
    }
    return m;
}

void inverse(int v[], int n)
{
    for(int i=1;i<=n;i++)
        cout<<invers(v[i])<<" ";
}

void palindrom(int v[], int n)
{
    for(int i=1;i<=n;i++)
        if(v[i]==invers(v[i]))
            cout<<v[i]<<" ";
}

int suma(int v[], int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
        s+=v[i];
    return s;
}

int cifDeControl(int v[], int n)
{
    int x=suma(v,n);
    if(x<=9)
        return x;
    else
        return x%9;
}

void ordCresc(int v[], int n)
{
    for(int i=1;i<=n-1;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]>v[j])
            {
                int aux=v[j];
                v[j]=v[i];
                v[i]=aux;
            }
}

int poz(int v[], int n, int x)
{
    for(int i=1;i<=n;i++)
        if(v[i]==x)
            return i;
}

void divProprii(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            cout<<i<<" ";
}

int main()
{
    int v[100],n,x;

    cout<<"Introduceti dimensiunea vectorului: "; cin>>n;
    cout<<"Cititi vectorul: ";citire(v,n);
    cout<<endl<<endl;

    int u[100];
    cpy(v,u,n);

    cout<<"         Avem disponibile urmatoarele prelucrari!"<<endl;
    cout<<"         1.  Cel mai mic numar din vector"<<endl;
    cout<<"         2.  Cel mai mare numar din vector"<<endl;
    cout<<"         3.  Numerele prime din vector"<<endl;
    cout<<"         4.  Patratele perfecte din vector"<<endl;
    cout<<"         5.  Cuburile perfecte din vector"<<endl;
    cout<<"         6.  Numerele palindrom din vector"<<endl;
    cout<<"         7.  Ultimele cifre ale fiecarui numar din vector"<<endl;
    cout<<"         8.  Suma numerelor din vector"<<endl;
    cout<<"         9.  Pozitia numarului x"<<endl;
    cout<<"         10. Cifra de control"<<endl;
    cout<<"         11. Divizorii proprii pentru fiecare numar din vector"<<endl;
    cout<<"         12. Inversul fiecarui numar din vector"<<endl;
    cout<<"         13. Ordonarea vectorului crescator"<<endl;
    cout<<"         14. Ordonarea vectorului descrescator"<<endl;
    cout<<"         15. Citirea unui alt vector"<<endl;
    cout<<endl<<endl;
    cout<<"Alegeti-va o prelucrare: "; cin>>x;

    while(x!=0)
    {
        switch(x)
        {
        case 1:
        {
            cout<<endl<<"Minimul din vector este: "<<minim(v,n)<<endl;
            cout<<"Alegeti-va o alta prelucrare sau apasati '0' pentru a inchide programul: ";
            break;
        }
        case 2:
        {
            cout<<endl<<"Maximul din vector este: "<<maxim(v,n)<<endl;
            cout<<"Alegeti-va o alta prelucrare sau apasati '0' pentru a inchide programul: ";
            break;
        }
        case 3:
        {
            cout<<endl<<"Numerele prime din vector sunt: ";
            nrPrime(v,n);
            cout<<endl;
            cout<<"Alegeti-va o alta prelucrare sau apasati '0' pentru a inchide programul: ";
            break;
        }
        case 4:
        {
            cout<<endl<<"Patratele perfecte din vector sunt: ";
            patratePerfecte(v,n);
            cout<<endl;
            cout<<"Alegeti-va o alta prelucrare sau apasati '0' pentru a inchide programul: ";
            break;
        }
        case 5:
        {
            cout<<endl<<"Cuburile perfecte din vector sunt: ";
            cuburiPerfecte(v,n);
            cout<<endl;
            cout<<"Alegeti-va o alta prelucrare sau apasati '0' pentru a inchide programul: ";
            break;
        }
        case 6:
        {
            cout<<endl<<"Palindroamele din vector sunt: ";
            palindrom(v,n);
            cout<<endl;
            cout<<"Alegeti-va o alta prelucrare sau apasati '0' pentru a inchide programul: ";
            break;
        }
        case 7:
        {
            cout<<endl<<"Ultimele cifre: ";
            uc(v,n);
            cout<<endl;
            cout<<"Alegeti-va o alta prelucrare sau apasati '0' pentru a inchide programul: ";
            break;
        }
        case 8:
        {
            cout<<endl<<"Suma numerelor din vector este: "<<suma(v,n)<<endl;
            cout<<"Alegeti-va o alta prelucrare sau apasati '0' pentru a inchide programul: ";
            break;
        }
        case 9:
        {
            int x;
            cout<<"Cititi numarul: "; cin>>x;
            cout<<poz(v,n,x)<<" este pozitia lui "<<x<<" in vector"<<endl;
            cout<<"Alegeti-va o alta prelucrare sau apasati '0' pentru a inchide programul: ";
            break;
        }
        case 10:
        {
            cout<<endl<<"Cifra de control: "<<cifDeControl(v,n)<<endl;
            cout<<"Alegeti-va o alta prelucrare sau apasati '0' pentru a inchide programul: ";
            break;
        }
        case 11:
        {
            cout<<endl;
            for(int i=1;i<=n;i++)
            {
                if(ePrim(v[i]))
                    cout<<"Numarul "<<v[i]<<" nu are divizori proprii, acesta este prim";
                else
                {
                    cout<<"Divizorii lui "<<v[i]<<" sunt: ";
                    divProprii(v[i]);
                }
                cout<<endl;
            }
            cout<<"Alegeti-va o alta prelucrare sau apasati '0' pentru a inchide programul: ";
            break;
        }
        case 12:
        {
            cout<<endl<<"Inversele numerelor din vector sunt: ";
            inverse(v,n);
            cout<<endl;
            cout<<"Alegeti-va o alta prelucrare sau apasati '0' pentru a inchide programul: ";
            break;
        }
        case 13:
        {
            cout<<endl<<"Vectorul ordonat crescator: ";
            ordCresc(v,n);
            afisare(v,n);
            restore(v,u,n);
            cout<<endl;
            cout<<"Alegeti-va o alta prelucrare sau apasati '0' pentru a inchide programul: ";
            break;
        }
        case 14:
        {
            cout<<endl<<"Vectorul ordonat descrescator: ";
            ordCresc(v,n);
            afisareInversa(v,n);
            restore(v,u,n);
            cout<<endl;
            cout<<"Alegeti-va o alta prelucrare sau apasati '0' pentru a inchide programul: ";
            break;
        }
        case 15:
        {
            cout<<"Introduceti dimensiunea vectorului: "; cin>>n;
            cout<<"Cititi vectorul: "; citire(v,n);
            cout<<"Alegeti-va o prelucrare: ";
            cpy(v,u,n);
            break;
        }
        default:
            {
                cout<<"Va rog alegeti un numar valid!!"<<endl<<endl;
                cout<<"Alegeti-va o prelucrare: ";
                break;
            }
        }
        cin>>x;
    }
    return 0;
}

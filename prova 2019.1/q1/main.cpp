#include <iostream>

using namespace std;

void comparar(string a, string b, string c);

int main()
{
    string s1;
    string s2;
    string s3;

    cout << "Digite a primeita palavra: ";
    cin >> s1;
    cout << "Agora, a segunda: ";
    cin >> s2;
    cout << "Por fim, a terceira: ";
    cin >> s3;

    comparar(s1, s2, s3);

    return 0;
}

void comparar(string a, string b, string c)
{
    if(a.size() > b.size() and a.size() > c.size())
    {
        cout << a << " é maior.\n";
        if(b.size() < c.size())
            cout << b << " é menor.\n";
        else if(b.size() > c.size())
            cout << c << " é menor.\n";
        else
            cout << "As outras são de mesmo tamanho.\n";
    }
    if(b.size() > a.size() and b.size() > c.size())
    {
        cout << b << " é maior.\n";
        if(a.size() > c.size())
            cout << c << " é menor.\n";
        else if(a.size() < c.size())
            cout << a << " é menor.\n";
        else 
            cout << "As outras são de mesmo tamanho.\n";
    }
    if(c.size() > a.size() and c.size() > b.size())
    {
        cout << c << " é maior.\n";
        if(b.size() > c.size())
            cout << c << " é menor.\n";
        else if(b.size() < c.size())
            cout << b << " é menor.\n";
        else 
            cout << "As outras são de mesmo tamanho.\n";
    }
}
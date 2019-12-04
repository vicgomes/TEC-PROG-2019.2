#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, string> evento;

    cout << "Informe o local do evento: ";
    getline(cin, evento["Local"]);

    cout << "Agora, o responsável pelo evento: ";
    getline(cin, evento["Responsável"]);

    cout << "Por fim, a prioridade do evento: ";
    getline(cin, evento["Prioridade"]);
    cout << endl;

    for(auto elemento : evento)
    {
        cout << elemento.first << " : " << elemento.second << endl;
    }

    return 0;
}
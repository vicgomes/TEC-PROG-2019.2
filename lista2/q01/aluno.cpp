#include "aluno.h"

#define NOME_VALIDO 3 //<-num. mínimo de letras em um nome
#define NOME_DISC 2   //<-num. mínimo de letras em uma disciplina
#define NUM_MAT 11    //<-num. de dígitos da matrícula
#define MENOR_MEDIA 0
#define MAIOR_MEDIA 100

using namespace std;



//SETTERS:

void Aluno::set_nome(string alguem){
    if(alguem.size() >= NOME_VALIDO){
        nome = alguem;
    }else{
        cout << "Nome inválido!\n";
        cin.ignore();
        getline(cin, alguem);//para não pegar apenas o primeiro nome
    }
}

void Aluno::set_matricula(string mat){
    if(mat.size() == NUM_MAT) matricula = mat;
    else{
        cout << "Número da matrícula inválido, digite novamente.\n";
        matricula = "número inválido";
    }
}

void Aluno::set_medias(){
    int cont_medias = 0;
    float media_temp = 0;

    while(media_temp != -1){
        cout << "Digite a " << cont_medias+1 << "° média do aluno ou -1 se quiser parar.\n";
        cin >> media_temp;

        if(media_temp == -1) break;
        while(media_temp < MENOR_MEDIA or media_temp > MAIOR_MEDIA){
            cout << "Média inválida, digite novamente e que seja dentro do intervalo [0,100].\n";
            cin >> media_temp;
        }

        medias.push_back(media_temp);
        cont_medias++;
    }   
}

void Aluno::set_CRE(){
    float soma_medias = 0;

    for(int i = 0;i < medias.size();i++) soma_medias += medias[i];

    CRE = soma_medias/medias.size();
}

void Aluno::set_disciplinas(){
    int cont_disc = 0;
    string disc_temp = "0";

    while(disc_temp != "-1"){
        cout << "Digite a disciplina de número " << cont_disc+1 << ", ou digite -1 se quiser parar.\n";
        cin >> disc_temp;

        if(disc_temp == "-1") break;
        while(disc_temp.size() < NOME_DISC){
            cout << "Nome inválido, digite novamente.\n";
            cin >> disc_temp;
        }

        disciplinas.push_back(disc_temp);
        cont_disc++;
    }
}




//GETTERS:

string Aluno::get_nome(){
    return nome;
}

string Aluno::get_matricula(){
    return matricula;
}

float Aluno::get_medias(){
    cout << "\n\nMédia(s) do aluno:\n";
    for(int i = 0;i < medias.size();i++){
        if(medias.size() == 1) cout << medias[i] << ".";
        else cout << medias[i] << ", ";
    }

    cout << endl;
}

float Aluno::get_CRE(){
    return CRE;
}

void Aluno::get_disciplinas(){
    cout << "\nDisciplina(s) do aluno:\n";
    for(int i = 0;i < disciplinas.size();i++){
        if(disciplinas.size() == 1) cout << disciplinas[i] << ".";
        else cout << disciplinas[i] << ", ";
    }

    cout << endl;
}
//fim dos setters e getters



//PEGAR E MOSTRAR DADOS:

void Aluno::pegar_dados(){
    string nome_temp;
    string matricula_temp;

    cout << "Digite o nome.\n";
    cin >> nome_temp;
    set_nome(nome_temp);

    cout << "E agora, a matrícula do aluno.\n";
    cin >> matricula_temp;
    set_matricula(matricula_temp);

    set_disciplinas();
    set_medias();
    set_CRE();
}

void Aluno::mostrar_dados(){
    cout << "\n\n\nNome do aluno: " << nome << endl;
    
    cout << "A matrícula do aluno é: " << get_matricula() << endl;

    get_disciplinas();
    get_medias();
    
    cout << "\n\nO CRE do aluno é: " << get_CRE() << "\n\n";
}

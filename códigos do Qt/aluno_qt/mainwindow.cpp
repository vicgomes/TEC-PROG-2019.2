
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_submeter_clicked()
{
    Aluno aluno;

    aluno.setNome(ui->input_nome->text());
    aluno.setMatricula(ui->input_mat->text());
    aluno.setMedia(ui->input_media->text().toDouble());
    aluno.setCurso(ui->input_curso->currentText());

    ui->input_nome->clear();
    ui->input_mat->clear();
    ui->input_media->clear();
    ui->input_curso->clear();

    int linhas = ui->tabela->rowCount(); //contador de linhas
    ui->tabela->insertRow(linhas);

    ui->tabela->setItem(linhas, 0, new QTableWidgetItem(aluno.getNome()));
    ui->tabela->setItem(linhas, 1, new QTableWidgetItem(aluno.getMatricula()));
    ui->tabela->setItem(linhas, 2, new QTableWidgetItem(QString::number(aluno.getMedia()))); //convertendo double->string
    ui->tabela->setItem(linhas, 3, new QTableWidgetItem(aluno.getCurso()));
    ui->tabela->setItem(linhas, 4, new QTableWidgetItem(aluno.definir_status()));

    turma.inserir_aluno(aluno);
    atualizar_estatisticas();
}

void MainWindow::atualizar_estatisticas()
{
    ui->label_5
    ui->maiorNota.setText(QString::number(turma.get_maior()));
    ui->menor_nota.setText(QString::number(turma.get_menor()));
}

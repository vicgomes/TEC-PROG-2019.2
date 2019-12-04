#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug> //para verificação
#include <QString>
#include "aluno.h"
#include "turma.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_submeter_clicked();

private:
    Ui::MainWindow *ui;
    Turma turma;

    void atualizar_estatisticas();
};
#endif // MAINWINDOW_H

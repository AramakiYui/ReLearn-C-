#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_add_clicked();

    void on_edit_clicked();

    void on_del_clicked();

    void on_tableWidget_itemSelectionChanged();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H

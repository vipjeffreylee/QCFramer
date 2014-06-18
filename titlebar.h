#ifndef TITLEBAR_H
#define TITLEBAR_H

#include <QFrame>
#include<QIcon>
#include<QLabel>
#include<QToolButton>

class TitleBar : public QFrame
{
    Q_OBJECT
private:
    QIcon settingsIcon;
    QIcon skinIcon;
    QIcon minIcon;
    QIcon maxIcon;
    QIcon normalIcon;
    QIcon closeIcon;
    QLabel *titleLabel;
    QToolButton* settingButton;
    QToolButton* skinButton;
    QToolButton* minButton;
    QToolButton* maxButton;
    QToolButton* closeButton;
public:
    explicit TitleBar(QWidget *parent = 0);

signals:
    void maximumed();
    void minimuned();
    void normaled();
    void closed();
public slots:

};

#endif // TITLEBAR_H
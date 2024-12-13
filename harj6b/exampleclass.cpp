#include "exampleclass.h"
#include <QObject>
#include <QThread>
#include <QCoreApplication>
#include <QDebug>

ExampleClass::ExampleClass(QObject *parent) : QObject(parent)
{
    qDebug()<<"Start";
            // tähän connect
    QObject::connect(this,SIGNAL(readyToSay()), this,SLOT(sayHelloSlot()));

    qDebug()<<"End";
}

void ExampleClass::startToWait(){
    QThread::msleep(1000);
    emit readyToSay();
}

void ExampleClass::sayHelloSlot(){
     qDebug()<<"Terve";
}
